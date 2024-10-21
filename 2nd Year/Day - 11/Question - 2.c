// ©️ Soumyadeep Kundu [2305820]
// Write a program to sort array of elements in ascending and descending order by selection sort using function.

#include <stdio.h>

void sort(int *arr, int size, int ascending)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if ((ascending == 1 && arr[j] < arr[i]) || ((ascending == 0 && arr[j] > arr[i])))
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
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
  sort(arr, size, 1);
  print(arr, size);
  printf("Descending Order: ");
  sort(arr, size, 0);
  print(arr, size);
}