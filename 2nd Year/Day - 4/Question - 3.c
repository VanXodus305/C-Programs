// ©️ Soumyadeep Kundu [2305820]
// Write a program to represent the polynomial equation of single variable using single linked list and perform the addition of two polynomial equations.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int coeff, degree;
  struct Node *next;
};

struct Node *head[2] = {NULL, NULL};

void insert(int value, int degree, int index)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->coeff = value;
  temp->degree = degree;
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
  int sum = node1 != NULL ? node1->coeff : 0;
  sum += node2 != NULL ? node2->coeff : 0;
  int degree = node1 != NULL ? node1->degree : node2->degree;
  node1 == head[0] && node2 == head[1] ? printf("%dx^%d", sum, degree) : printf("%dx^%d + ", sum, degree);
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
      insert(value, j, i);
    }
  }
  printf("Sum: ");
  sum(head[0], head[1]);
}