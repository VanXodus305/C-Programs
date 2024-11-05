// ©️ Soumyadeep Kundu [2305820]
// Write a program to perform merge sort on array of elements to arrange it in ascending order using function.

#include <stdio.h>

void merge(int arr[], int p, int q, int r)
{
  int n1 = q - p + 1, n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i = 0, j = 0, k = p;
  while (i < n1 && j < n2)
  {
    if (L[i] <= M[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2)
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void sort(int arr[], int l, int r)
{
  if (l < r)
  {
    int m = (l + r) / 2;
    sort(arr, l, m);
    sort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void print(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void main()
{
  int size;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the elements: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Ascending Order: ");
  sort(arr, 0, size - 1);
  print(arr, size);
}