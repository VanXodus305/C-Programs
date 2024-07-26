#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of the matrix: ");
  scanf("%d", &n);
  int arr1[n][n];
  int arr2[n][n];
  printf("Enter the elements of Matrix 1:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("Enter the elements of Matrix 2:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("Product of the Matrices:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int sum = 0;
      for (int k = 0; k < n; k++)
      {
        sum += (arr1[i][k] * arr2[k][j]);
      }
      printf("%d\t", sum);
    }
    printf("\n");
  }
  return 0;
}