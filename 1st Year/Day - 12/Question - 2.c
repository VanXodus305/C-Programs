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
  printf("Unique elements of the Array:\n");
  for (int i = 0; i < n; i++)
  {
    int f = 0;
    for (int j = 0; j < n; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        f++;
      }
    }
    if (f > 0)
    {
      continue;
    }
    printf("%d\t", arr[i]);
  }
  return 0;
}