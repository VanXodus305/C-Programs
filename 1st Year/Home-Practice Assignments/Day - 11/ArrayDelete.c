#include <stdio.h>
int main()
{
  int n, a, pos;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr1[n], arr2[n - 1];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter the position of element to delete: ");
  scanf("%d", &pos);
  printf("New Array:\n");
  for (int i = 0; i < n - 1; i++)
  {
    if (i < pos - 1)
    {
      arr2[i] = arr1[i];
    }
    else
    {
      arr2[i] = arr1[i + 1];
    }
    printf("%d\t", arr2[i]);
  }
  return 0;
}
