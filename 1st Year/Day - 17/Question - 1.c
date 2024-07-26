#include <stdio.h>
int eleSum(int row, int col, int arr1[row][col])
{
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      sum += arr1[i][j];
    }
  }
  return sum;
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
  printf("The sum of numbers in the array = %d", eleSum(n, m, arr));
  return 0;
}