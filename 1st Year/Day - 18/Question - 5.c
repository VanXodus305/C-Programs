#include <stdio.h>
int largest(int arr1[], int a, int size)
{
  if (size == 0)
  {
    return a;
  }
  if (arr1[size - 1] > a)
  {
    return largest(arr1, arr1[size - 1], size - 1);
  }
  else
  {
    return largest(arr1, a, size - 1);
  }
}
int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Maximum element in the Array: %d\n", largest(arr, arr[0], n));
}