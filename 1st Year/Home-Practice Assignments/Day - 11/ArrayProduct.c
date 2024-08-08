#include <stdio.h>
int main()
{
  int n, prod = 1;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    prod = prod * arr[i];
  }
  printf("Product of the numbers in the array = %d", prod);
  return 0;
}