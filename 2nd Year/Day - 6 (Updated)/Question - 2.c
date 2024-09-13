// ©️ Soumyadeep Kundu [2305820]
// Write a program to reverse a stack using recursion, without using any loop or any additional memory.

#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *top = NULL;
struct Node *temp;

void push(char value)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = top;
  top = temp;
}

void reverse(struct Node *top)
{
  if (top == NULL)
  {
    return;
  }
  printf("%d ", top->data);
  reverse(top->next);
  free(top);
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
  printf("Reversed Stack: ");
  reverse(top);
}