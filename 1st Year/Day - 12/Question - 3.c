#include <stdio.h>
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
  printf("Even numbers in the array: ");
  for (int i = 0; i < n; i++)
  {
    if ((arr[i] % 2) == 0)
    {
      printf("%d ", arr[i]);
    }
  }
  printf("\nOdd numbers in the array: ");
  for (int i = 0; i < n; i++)
  {
    if ((arr[i] % 2) != 0)
    {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}