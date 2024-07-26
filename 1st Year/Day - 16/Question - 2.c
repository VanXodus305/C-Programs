#include <stdio.h>
int sort(int arr1[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j < size - i; j++)
    {
      if (arr1[j] < arr1[j - 1])
      {
        int temp = arr1[j];
        arr1[j] = arr1[j - 1];
        arr1[j - 1] = temp;
      }
    }
  }
}
int main()
{
  int n, sum = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  sort(arr, n);
  printf("Elements in Ascending Order:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}