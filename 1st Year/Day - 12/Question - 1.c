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
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i; j++)
    {
      if (arr[j] < arr[j - 1])
      {
        temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
  printf("Elements in Ascending Order:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}