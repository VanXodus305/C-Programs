#include <stdio.h>
int main()
{
  int n, count = 0, maj = 0;
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
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count > (n / 2) && count > maj)
    {
      maj = arr[i];
    }
  }
  printf("The majority element in the array: %d", maj);
  return 0;
}
