// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to create a stack using linked list and perform the following operation using function
// a. Push
// b. Pop
// c. IsEmpty
// d. Display the stack elements

#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *top = NULL;
struct Node *temp;

void push(int value)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = top;
  top = temp;
}

int pop()
{
  if (top == NULL)
  {
    printf("Stack is empty.\n");
    return -1;
  }
  temp = top;
  int data = temp->data;
  top = top->next;
  free(temp);
  return data;
}

void print()
{
  temp = top;
  if (temp == NULL)
  {
    printf("Stack is empty.\n");
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
  if (top == NULL)
  {
    printf("Stack is empty.\n");
  }
  else
  {
    printf("Stack is not empty.\n");
  }
}

void main()
{
  int choice;
  printf("Main Menu:\n1. Push\n2. Pop\n3. IsEmpty\n4. Traverse\n5. Exit\n");
  while (choice != 5)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be pushed: ");
      int value;
      scanf("%d", &value);
      push(value);
      break;
    case 2:
      printf("%d deleted from the Stack.\n", pop());
      break;
    case 3:
      isEmpty();
      break;
    case 4:
      printf("Stack: ");
      print();
      break;
    case 5:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}