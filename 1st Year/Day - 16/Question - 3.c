#include <stdio.h>
int largest(int arr1[], int size)
{
  int max = arr1[0];
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] > max)
    {
      max = arr1[i];
    }
  }
  return max;
}
int smallest(int arr1[], int size)
{
  int min = arr1[0];
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] < min)
    {
      min = arr1[i];
    }
  }
  return min;
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
  printf("Largest Number in the Array: %d\n", largest(arr, n));
  printf("Smallest Number in the Array: %d\n", smallest(arr, n));
}