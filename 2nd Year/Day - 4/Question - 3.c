// Write a program to represent the polynomial equation of single variable using single linked list and perform the addition of two polynomial equations.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *head[2] = {NULL, NULL};
int degree;

void insert(int value, int index)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = head[index];
  head[index] = temp;
}

void sum(struct Node *node1, struct Node *node2)
{
  if (node1 == NULL && node2 == NULL)
  {
    return;
  }
  else if (node1 != NULL && node2 != NULL)
  {
    sum(node1->next, node2->next);
  }
  else
  {
    node1 == NULL ? sum(NULL, node2->next) : sum(node1->next, NULL);
  }
  int sum = node1 != NULL ? node1->data : 0;
  sum += node2 != NULL ? node2->data : 0;
  node1 == head[0] && node2 == head[1] ? printf("%dx^%d", sum, degree--) : printf("%dx^%d + ", sum, degree--);
}

void main()
{
  int n[2];
  for (int i = 0; i < 2; i++)
  {
    printf("Polynomial - %d:\n", i + 1);
    printf("Enter the Maximum power of x: ");
    scanf("%d", &n[i]);
    for (int j = n[i]; j >= 0; j--)
    {
      int value;
      printf("Enter the coefficient of degree - %d: ", j);
      scanf("%d", &value);
      insert(value, i);
    }
  }
  degree = n[0] > n[1] ? n[0] : n[1];
  printf("Sum: ");
  sum(head[0], head[1]);
}