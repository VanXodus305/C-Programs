#include <stdio.h>
int largest(int row, int col, int arr1[row][col])
{
  int max = arr1[0][0];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr1[i][j] > max)
      {
        max = arr1[i][j];
      }
    }
  }
  return max;
}
int smallest(int row, int col, int arr1[row][col])
{
  int min = arr1[0][0];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr1[i][j] < min)
      {
        min = arr1[i][j];
      }
    }
  }
  return min;
}
int main()
{
  int n, m;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr[n][m];
  printf("Enter the numbers in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Largest Number in the Array: %d\n", largest(n, m, arr));
  printf("Smallest Number in the Array: %d\n", smallest(n, m, arr));
}