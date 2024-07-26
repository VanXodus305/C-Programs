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
  printf("Elements of the array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}