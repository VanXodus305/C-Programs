#include <stdio.h>
int main()
{
  int n, largest, slargest;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if (i == 0)
    {
      largest = arr[i];
    }
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  slargest = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > slargest && arr[i] < largest)
    {
      slargest = arr[i];
    }
  }
  printf("Second largest number in the array = %d\n", slargest);
  return 0;
}