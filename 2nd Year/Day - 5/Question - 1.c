// ©️ Soumyadeep Kundu [2305820]
// Write a program to create a double linked list and perform the following menu-based operations on it:
// i. insert an element at specific position
// ii. delete an element from specific position
// iii. Traverse the list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next, *prev;
};

struct Node *head = NULL, *tail, *temp;

int insert(int value, int pos)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = NULL;
  if (pos <= 0)
  {
    printf("Invalid Position.\n");
    return 0;
  }
  else if (pos == 1)
  {
    temp->next = head;
    head = temp;
    return 1;
  }
  tail = head;
  for (int i = 1; i < (pos - 1); i++)
  {
    tail = tail->next;
    if (tail == NULL)
    {
      printf("Invalid Position.\n");
      return 0;
    }
  }
  temp->next = tail->next;
  tail->next = temp;
  return 1;
}

int delete(int pos)
{
  struct Node *node;
  tail = head;
  if (pos <= 0 || tail == NULL)
  {
    printf("Invalid Position.\n");
    return 0;
  }
  else if (pos == 1)
  {
    node = head;
    head = head->next;
    free(node);
    return 1;
  }
  for (int i = 1; i < (pos - 1); i++)
  {
    tail = tail->next;
    if (tail == NULL || tail->next == NULL)
    {
      printf("Invalid Position.\n");
      return 0;
    }
  }
  node = tail->next;
  tail->next = node->next;
  free(node);
  return 1;
}

void traverse(struct Node *node)
{
  if (node == NULL)
  {
    return;
  }
  printf("%d ", node->data);
  traverse(node->next);
}

void main()
{
  int choice = 0, value, pos, n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements: ");
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &value);
    insert(value, i);
  }
  while (choice != 4)
  {
    printf("\n1. Insert the node at a position\n2. Delete a node from specific position\n3. Traversal\n4. Exit\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the element: ");
      scanf("%d", &value);
      printf("Enter the position: ");
      scanf("%d", &pos);
      insert(value, pos) ? printf("Node Inserted.\n") : printf("");
      break;
    case 2:
      printf("Enter the position: ");
      scanf("%d", &pos);
      delete (pos) ? printf("Node Deleted.\n") : printf("");
      break;
    case 3:
      printf("The list is: ");
      traverse(head);
      break;
    case 4:
      exit(0);
    default:
      printf("Invalid Choice.\n");
    }
  }
}
