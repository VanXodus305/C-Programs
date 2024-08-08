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
  printf("The peak elements in the array are:\n");
  for (i = 0; i < n; i++)
  {
    if ((i > 0 ? arr[i] > arr[i - 1] : 1) && (i < n - 1 ? arr[i] > arr[i + 1] : 1))
    {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}