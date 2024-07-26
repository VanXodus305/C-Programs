#include <stdio.h>
int secLargest(int arr1[], int size)
{
  int max = arr1[0];
  int secmax = arr1[0];
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] > max)
    {
      max = arr1[i];
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] > secmax && arr1[i] < max)
    {
      secmax = arr1[i];
    }
  }
  return secmax;
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
  printf("Second Largest Number in the Array: %d\n", secLargest(arr, n));
}