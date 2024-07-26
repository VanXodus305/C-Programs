#include <stdio.h>
int main()
{
  int n, temp;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n/2; i++)
  {
    temp = arr[n - 1 - i];
    arr[n - 1 - i] = arr[i];
    arr[i] = temp;
  }
  printf("Reversed Array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}