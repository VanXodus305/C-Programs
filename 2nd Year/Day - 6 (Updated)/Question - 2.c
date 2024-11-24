// ©️ Soumyadeep Kundu [2305820]
// Write a program to reverse a stack using recursion, without using any loop or any additional memory.

#include <stdio.h>

int top = -1;
int stack[100];
int bottom = 100;

void push(int value)
{
  if (top == 100 - 1)
  {
    printf("Stack is Full.\n");
    return;
  }
  stack[++top] = value;
}

void pushToBottom()
{
  if (top == -1)
  {
    return;
  }
  int value = stack[top--];
  pushToBottom();
  stack[--bottom] = value;
}

void popToTop()
{
  if (bottom == 100)
  {
    return;
  }
  push(stack[bottom++]);
  popToTop();
}

void print()
{
  for (int i = top; i >= 0; i--)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

void main()
{
  int n, value;
  printf("Enter a the number of values to input: ");
  scanf("%d", &n);
  printf("Enter the values: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &value);
    push(value);
  }
  printf("Original Stack: ");
  print();
  pushToBottom();
  popToTop();
  printf("Reversed Stack: ");
  print();
}