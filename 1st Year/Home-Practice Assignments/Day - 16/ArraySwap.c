#include <stdio.h>
void swap(int arr1[], int size)
{
  int max = 0, min = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] > arr1[max])
    {
      max = i;
    }
    if (arr1[i] < arr1[min])
    {
      min = i;
    }
  }
  int temp = arr1[min];
  arr1[min] = arr1[max];
  arr1[max] = temp;
  printf("Array after Swapping:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr1[i]);
  }
}
int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  swap(arr, n);
  return 0;
}