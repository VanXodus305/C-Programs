#include <stdio.h>
#include <string.h>
#include <ctype.h>
void copy(int arr1[], int arr2[], int len)
{
  arr2[len] = arr1[len];
  if (len > 0)
  {
    copy(arr1, arr2, len - 1);
  }
  printf("Value of Array 2 at positon %d: %d\n", len + 1, arr2[len]);
}
int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr1[n];
  int arr2[n];
  printf("Enter the elements in the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  copy(arr1, arr2, n - 1);
  return 0;
}