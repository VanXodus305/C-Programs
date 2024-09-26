// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to implement linear queue operations such as Enqueue, Dequeue, IsEmpty, Traverse using single linked list.
// 1. Enqueue
// 2. Dequeue
// 3. IsEmpty
// 4. Traverse
// 5. Exit

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *front = NULL, *rear = NULL, *temp = NULL;

void enqueue(int value)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = NULL;
  if (front == NULL && rear == NULL)
  {
    front = rear = temp;
  }
  else
  {
    rear->next = temp;
    rear = temp;
  }
}

int dequeue()
{
  temp = front;
  if (front == NULL && rear == NULL)
  {
    printf("Queue is Empty.");
    return -1;
  }
  else if (front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    front = front->next;
  }
  int value = temp->data;
  free(temp);
  return value;
}

void print()
{
  temp = front;
  if (front == NULL && rear == NULL)
  {
    printf("Queue is Empty.");
    return;
  }
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void isEmpty()
{
  if (front == NULL && rear == NULL)
  {
    printf("Queue is Empty.");
  }
  else
  {
    printf("Queue is not Empty.");
  }
}

void main()
{
  int choice;
  printf("Main Menu:\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. Traverse\n5. Exit\n");
  while (choice != 5)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be enqueued: ");
      int value;
      scanf("%d", &value);
      enqueue(value);
      break;
    case 2:
      printf("%d deleted from the Queue.\n", dequeue());
      break;
    case 3:
      isEmpty();
      break;
    case 4:
      printf("Queue: ");
      print();
      break;
    case 5:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}