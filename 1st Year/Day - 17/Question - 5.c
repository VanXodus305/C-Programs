#include <stdio.h>
void getSum(int row, int col, int arr1[row][col], int arr2[row][col])
{
  int arr3[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d\t", arr3[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int n, m;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr1[n][m];
  int arr2[n][m];
  printf("Enter the numbers in Array 1:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("Enter the numbers in Array 2:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("Sum of the Matrices:\n");
  getSum(n, m, arr1, arr2);
  return 0;
}