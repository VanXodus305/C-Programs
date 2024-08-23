// ©️ Soumyadeep Kundu [2305820]
// Write a program to create a circular linked list and display the elements of the list.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *head = NULL, *temp;

void insert(int value)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = NULL;
  if (head == NULL)
  {
    head = temp;
    temp->next = head;
    return;
  }
  struct Node *tail = head;
  while (tail->next != head)
  {
    tail = tail->next;
  }
  tail->next = temp;
  temp->next = head;
}

void traverse(struct Node *node)
{
  if (node->next == head)
  {
    printf("%d ", node->data);
    return;
  }
  printf("%d ", node->data);
  traverse(node->next);
}

void main()
{
  int n, value;
  printf("Enter the number of nodes: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("Enter info of node %d: ", i);
    scanf("%d", &value);
    insert(value);
  }
  printf("Circular linked list: ");
  traverse(head);
}