#include <stdio.h>
int eleSum(int arr1[3][3])
{
  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == j)
      {
        sum += arr1[i][j];
      }
    }
  }
  return sum;
}
int main()
{
  int arr[3][3];
  printf("Enter the numbers in the array:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("The sum of diagonal elements in the array = %d", eleSum(arr));
  return 0;
}