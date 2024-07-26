#include <stdio.h>
void swap(int arr1[], int size)
{
  int temp = arr1[0];
  arr1[0] = arr1[size - 1];
  arr1[size - 1] = temp;
  printf("Array after swapping:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr1[i]);
  }
}

int main()
{
  int n, sum = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  swap(arr, n);
}