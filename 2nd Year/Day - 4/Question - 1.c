// ©️ Soumyadeep Kundu [2305820]
// Write a program to create a single linked list of n nodes and perform the following menu-based operations on it using function:
// i. Insert a node at specific position
// ii. Deletion of an element from specific position
// iii. Count nodes
// iv. Traverse the linked list

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *head = NULL, *temp, *tail;

bool insert(int value, int pos)
{
  if (pos <= 0)
  {
    printf("Invalid Position.\n");
    return false;
  }
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  if (pos == 1)
  {
    temp->next = head;
    head = temp;
    return true;
  }
  temp->next = NULL;
  tail = head;
  for (int i = 1; i < (pos - 1); i++)
  {
    tail = tail->next;
    if (tail == NULL)
    {
      printf("Invalid Position.\n");
      return false;
    }
  }
  temp->next = tail->next;
  tail->next = temp;
  return true;
}

void delete(int pos)
{
  struct Node *node;
  tail = head;
  if (pos <= 0 || tail == NULL)
  {
    printf("Invalid Position.\n");
    return;
  }
  else if (pos == 1)
  {
    node = head;
    head = head->next;
    free(node);
    return;
  }
  for (int i = 1; i < (pos - 1); i++)
  {
    tail = tail->next;
    if (tail == NULL || tail->next == NULL)
    {
      printf("Invalid Position.\n");
      return;
    }
  }
  node = tail->next;
  tail->next = node->next;
  free(node);
  printf("Node deleted successfully.\n");
}

int count(struct Node *node)
{
  if (node == NULL)
  {
    return 0;
  }
  return 1 + count(node->next);
}

void display(struct Node *node)
{
  if (node == NULL)
  {
    return;
  }
  printf("%d ", node->data);
  display(node->next);
}

void main()
{
  int n, value, pos, choice = 1;
  printf("Enter the number of nodes:\n");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &value);
    insert(value, i);
  }
  printf("1. Insert a node at position\n2. Delete a node from specific position\n3. Count\n4. Traversal\n5. Exit\n");
  while (choice >= 1 && choice <= 5)
  {
    printf("Enter Choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the element: ");
      scanf("%d", &value);
      printf("Enter the position: ");
      scanf("%d", &pos);
      insert(value, pos) ? printf("Node inserted successfully.\n") : printf("Node not inserted.\n");
      break;
    case 2:
      printf("Enter the position: ");
      scanf("%d", &pos);
      delete (pos);
      break;
    case 3:
      printf("The total number of nodes: %d", count(head));
      printf("\n");
      break;
    case 4:
      printf("The list is: ");
      display(head);
      printf("\n");
      break;
    case 5:
      exit(0);
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}