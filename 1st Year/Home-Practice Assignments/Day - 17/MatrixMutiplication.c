#include <stdio.h>
int product(int arr1[3][3], int arr2[3][3])
{
  int arr3[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int sum = 0;
      for (int k = 0; k < 3; k++)
      {
        sum += (arr1[i][k] * arr2[k][j]);
      }
      printf("%d\t", sum);
    }
    printf("\n");
  }
}
int main()
{
  int arr1[3][3];
  int arr2[3][3];
  printf("Enter the numbers in the first matrix:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("Enter the numbers in the first matrix:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("Product of the matrices:\n");
  product(arr1, arr2);
  return 0;
}