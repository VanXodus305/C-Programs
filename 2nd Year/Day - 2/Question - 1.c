// WAP to create a 1-D array of n elements and perform the following menu based operations using function.
// a. insert a given element at specific position.
// b. delete an element from a specific position of the array.
// c. linear search to search an element
// d. traversal of the array

#include <stdio.h>
#include <stdlib.h>

void insert(int *arr, int *n)
{
  printf("Enter the element to be inserted: ");
  int element;
  scanf("%d", &element);
  printf("Enter the position: ");
  int position;
  scanf("%d", &position);
  if (position < 0 || position >= *n)
  {
    printf("Invalid position\n");
    return;
  }
  arr = (int *)realloc(arr, (*n + 1) * sizeof(int));
  *n = *n + 1;
  for (int i = *n - 1; i > position; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[position] = element;
  printf("Element inserted successfully.\n");
}

void delete(int *arr, int *n)
{
  printf("Enter the position to be deleted: ");
  int position;
  scanf("%d", &position);
  if (position < 0 || position >= *n)
  {
    printf("Invalid position\n");
    return;
  }
  for (int i = position; i < *n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr = (int *)realloc(arr, (*n - 1) * sizeof(int));
  *n = *n - 1;
  printf("Element deleted successfully.\n");
}

void search(int *arr, int *n)
{
  printf("Enter the element to be searched: ");
  int element;
  scanf("%d", &element);
  for (int i = 0; i < *n; i++)
  {
    if (arr[i] == element)
    {
      printf("Element found at position %d\n", i);
      return;
    }
  }
  printf("Element not found.\n");
}

void traverse(int *arr, int *n)
{
  for (int i = 0; i < *n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int *arr = (int *)malloc(n * sizeof(int));
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int choice;
  printf("Enter your choice: ");
  printf("\n1. Insert\n2. Delete\n3. Search\n4. Traverse\n5. Exit\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    insert(arr, &n);
    break;
  case 2:
    delete (arr, &n);
    break;
  case 3:
    search(arr, &n);
    break;
  case 4:
    traverse(arr, &n);
    break;
  case 5:
    exit(0);
    break;
  default:
    printf("Invalid choice\n");
  }
}