#include <stdio.h>
int main()
{
  int n, count = 0, i, j, f = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    int count = 0;
    for (j = 0; j < n; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        count++;
        break;
      }
    }
    if (count > 0 && j > i)
    {
      f++;
    }
  }
  printf("The number of duplicate elements in the array: %d", f);
  return 0;
}
