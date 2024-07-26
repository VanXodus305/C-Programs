#include <stdio.h>
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
    sum += arr[i];
  }
  printf("Sum of the numbers in the array = %d\n", sum);
  return 0;
}