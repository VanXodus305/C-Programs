#include <stdio.h>
int main()
{
  int n, largest;
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
  printf("Largest number in the array = %d\n", largest);
  return 0;
}