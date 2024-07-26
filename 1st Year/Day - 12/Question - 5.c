#include <stdio.h>
int main()
{
  int n, a, sum, f = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter sum: ");
  scanf("%d", &a);
  for (int i = 0; i < n; i++)
  {
    sum = arr[i];
    if (arr[i] == a)
    {
      printf("Sum found at index: %d", i + 1);
    }
    else
    {
      for (int j = i + 1; j < n; j++)
      {
        sum += arr[j];
        if (sum == a)
        {
          f = 1;
          printf("Sum found at index %d - %d\n", i, j);
          break;
        }
      }
    }
  }
  if (f == 0)
  {
    printf("Sum not found in the array.");
  }
  return 0;
}