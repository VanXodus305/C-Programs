#include <stdio.h>
int primeSum(int arr1[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    int f = 0;
    for (int j = 1; j <= arr1[i]; j++)
    {
      if (arr1[i] % j == 0)
      {
        f++;
      }
    }
    if (f == 2)
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
  printf("Sum of Prime Numbers in the array = %d", primeSum(arr, n));
  return 0;
}