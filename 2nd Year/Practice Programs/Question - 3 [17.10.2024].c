// For 2 given linked lists who merge at some point, WAP to find where the lists intersect.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct node *head = NULL;

struct node *findIntersection(struct Node *head1, struct Node *head2)
{
  struct Node *temp1 = head1;
  struct Node *temp2 = head2;

  while (temp1 != NULL)
  {
    while (temp2 != NULL)
    {
      if (temp1 == temp2)
      {
        return temp1;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
  printf("No intersection found\n");
  return NULL;
}