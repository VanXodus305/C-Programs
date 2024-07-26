#include <stdio.h>
int getSum(int arr1[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr1[i];
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
  printf("The sum of numbers in the array = %d", getSum(arr, n));
  return 0;
}