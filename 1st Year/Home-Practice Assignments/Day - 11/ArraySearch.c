#include <stdio.h>
int main()
{
  int n, a;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the number to be searched: ");
  scanf("%d", &a);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == a)
    {
      printf("Number found at location %d.", i + 1);
      break;
    }
    else if (i == n - 1)
    {
      printf("Number not found in the array.");
    }
    else
    {
      continue;
    }
  }
  return 0;
}