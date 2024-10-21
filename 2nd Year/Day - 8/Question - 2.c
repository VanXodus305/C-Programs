// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to implement priority queue operations such as Enqueue, Dequeue, Traverse using linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data, priority;
  struct Node *next;
};
struct Node *head = NULL, *temp = NULL;

void enqueue(int element, int priority)
{
  temp = head;
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = element;
  newNode->priority = priority;
  if (temp == NULL || temp->priority > priority)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  while (temp->next != NULL && temp->next->priority < priority
  )
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

int dequeue()
{
  if (head == NULL)
  {
    printf("Queue is Empty.");
    return -1;
  }
  temp = head;
  head = head->next;
  int value = temp->data;
  free(temp);
  return value;
}

void print()
{
  temp = head;
  if (temp == NULL)
  {
    printf("List is empty\n");
    return;
  }
  printf("Priority:\tItem:\n");
  while (temp != NULL)
  {
    printf("%d\t\t%d\n", temp->priority, temp->data);
    temp = temp->next;
  }
}

void main()
{
  int choice;
  printf("Main Menu:\n1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\n");
  while (choice != 4)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      int value, priority;
      printf("Enter value: ");
      scanf("%d", &value);
      printf("Enter priority: ");
      scanf("%d", &priority);
      enqueue(value, priority);
      break;
    case 2:
      printf("%d deleted from the Priority Queue.\n", dequeue());
      break;
    case 3:
      printf("Priority Queue:\n");
      print();
      break;
    case 4:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}