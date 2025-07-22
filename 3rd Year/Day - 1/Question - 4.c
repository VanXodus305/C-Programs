// Write a function to ROTATE_RIGHT (p1, p2) right an array for first p2 elements by 1 position using EXCHANGE (p, q) function that swaps/exchanges the numbers p & q. Parameter p1 be the starting address of the array and p2 be the number of elements to be rotated
// Input: Enter an array A of size N (9): 11 22 33 44 55 66 77 88 99
// Call the function ROTATE_RIGHT (A, 5)
// Output: Before ROTATE: 11 22 33 44 55 66 77 88 99 After ROTATE: 55 11 22 33 44 66 77 88 99

#include <stdio.h>
#include <stdlib.h>

void exchange(int *p, int *q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}

void rotate_right(int *p1, int p2)
{
  int last_element = p1[p2 - 1];

  for (int i = p2 - 1; i > 0; i--)
  {
    exchange(&p1[i], &p1[i - 1]);
  }

  // Place the last element at the first position
  p1[0] = last_element;
}

void main()
{
  int n;
  printf("Enter the size of the array (N): ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int p2;
  printf("Enter how many elements to rotate (p2): ");
  scanf("%d", &p2);

  printf("Before ROTATE: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  rotate_right(arr, p2);

  printf("After ROTATE: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}