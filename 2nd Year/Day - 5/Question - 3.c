// ©️ Soumyadeep Kundu [2305820]
// Write a program to represent the given sparse matrix using header single linked list and display it.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int row, col, data;
  struct Node *next;
};

struct Node *head = NULL, *temp;

void insert(int row, int col, int data)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->row = row;
  temp->col = col;
  temp->data = data;
  temp->next = head;
  head = temp;
}

void display(struct Node *node)
{
  if (node == NULL)
  {
    return;
  }
  if (node == head)
  {
    printf("%d %d %d\n", node->row, node->col, node->data);
  }
  display(node->next);
  if (node != head)
  {
    printf("%d %d %d\n", node->row, node->col, node->data);
  }
}

void main()
{
  int row, col, count = 0, value;
  printf("Enter size of the sparse matrix: ");
  scanf("%d %d", &row, &col);
  printf("Enter elements of the sparse matrix: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &value);
      if (value != 0)
      {
        count++;
        insert(i, j, value);
      }
    }
  }
  insert(row, col, count);
  printf("Sparse matrix in 3-tuple format:\n");
  display(head);
}