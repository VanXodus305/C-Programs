#include <stdio.h>
int main()
{
  int n, temp;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  int *p = arr;
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i; j++)
    {
      if (*(p + j) < *(p + j - 1))
      {
        temp = *(p + j);
        *(p + j) = *(p + j - 1);
        *(p + j - 1) = temp;
      }
    }
  }
  printf("Elements in Ascending Order:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", *(p + i));
  }
  return 0;
}