// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to create a stack using array and perform the following operation using function
// a. Push
// b. Pop
// c. Check stack is empty or not
// d. Check stack is full or not
// e. Display stack elements

#include <stdio.h>

int top = -1;
int stack[100];

void push(int value)
{
  if (top == 100 - 1)
  {
    printf("Stack is Full.\n");
    return;
  }
  stack[++top] = value;
}

int pop()
{
  if (top == -1)
  {
    printf("Stack is Empty.\n");
    return -1;
  }
  return stack[top--];
}

void print()
{
  for (int i = top; i >= 0; i--)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

void isEmpty()
{
  if (top == -1)
  {
    printf("Stack is Empty.\n");
  }
  else
  {
    printf("Stack is not Empty.\n");
  }
}

void isFull()
{
  if (top == 100 - 1)
  {
    printf("Stack is Full.\n");
  }
  else
  {
    printf("Stack is not Full.\n");
  }
}

void main()
{
  int choice;
  printf("Main Menu:\n1. Push\n2. Pop\n3. IsEmpty\n4. IsFull\n5. Traverse\n6. Exit\n");
  while (choice != 6)
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
      isFull();
      break;
    case 5:
      printf("Stack: ");
      print();
      break;
    case 6:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}