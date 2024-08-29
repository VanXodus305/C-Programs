// ©️ Soumyadeep Kundu [2305820]
// In addition to 4.1, perform following operations using function on the single linked list:
// i. search an element in the list
// ii. sort the list in ascending order
// iii. reverse the list

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
    if (tail == NULL)
    {
      printf("Invalid Position.\n");
      return;
    }
  }
  if (tail->next == NULL)
  {
    printf("Invalid Position.\n");
    return;
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

int search(struct Node *node, int value)
{
  if (node == NULL)
  {
    return -1;
  }
  if (node->data == value)
  {
    return 1;
  }
  return 1 + search(node->next, value);
}

void sort(struct Node *node)
{
  int value;
  for (struct Node *i = node; i != NULL; i = i->next)
  {
    for (struct Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->data > j->data)
      {
        value = i->data;
        i->data = j->data;
        j->data = value;
      }
    }
  }
  printf("Sorted list: ");
  display(head);
}

void reverse(struct Node *node)
{
  if (node->next == NULL)
  {
    head = node;
    return;
  }
  reverse(node->next);
  node->next->next = node;
  node->next = NULL;
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
  printf("1. Insert a node at position\n2. Delete a node from specific position\n3. Count\n4. Traversal\n5. Search\n6. Sort\n7. Reverse\n8. Exit\n");
  while (choice >= 1 && choice <= 8)
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
      printf("Enter element to be searched: ");
      scanf("%d", &value);
      int result = search(head, value);
      result != -1 ? printf("Element found at node - %d\n", result) : printf("Element not found.\n");
      break;
    case 6:
      sort(head);
      printf("\n");
      break;
    case 7:
      reverse(head);
      printf("Reversed list: ");
      display(head);
      printf("\n");
      break;
    case 8:
      exit(0);
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}