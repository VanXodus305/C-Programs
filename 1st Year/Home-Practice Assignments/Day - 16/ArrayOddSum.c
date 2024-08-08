#include <stdio.h>
int oddSum(int arr1[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if ((arr1[i] % 2) != 0)
    {
      sum += arr1[i];
    }
  }
  return sum;
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
  printf("Sum of Odd Numbers in the array = %d", oddSum(arr, n));
  return 0;
}