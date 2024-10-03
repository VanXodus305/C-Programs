// ©️ Soumyadeep Kundu [2305820]
// Write a program to sort array of elements in ascending and descending order by insertion sort using function.

#include <stdio.h>

void sort(int *arr, int size, int ascending)
{
  for (int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && ((ascending == 1 && arr[j] > key) || (ascending == 0 && arr[j] < key)))
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
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

int main()
{
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Ascending Order: ");
  sort(arr, size, 1);
  print(arr, size);
  printf("Descending Order: ");
  sort(arr, size, 0);
  print(arr, size);
}