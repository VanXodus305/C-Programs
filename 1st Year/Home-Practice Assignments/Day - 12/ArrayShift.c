#include <stdio.h>
int main(void)
{
  int n, d;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the shift value: ");
  scanf("%d", &d);
  for (int j = 1; j <= d; j++)
  {
    int temp = arr[0];
    for (int k = 0; k < n; k++)
    {
      if (k == n - 1)
      {
        arr[k] = temp;
        continue;
      }
      arr[k] = arr[k + 1];
    }
  }
  printf("Shifted Array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
