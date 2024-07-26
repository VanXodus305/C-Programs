#include <stdio.h>
int primeSum(int row, int col, int arr1[row][col])
{
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      int f = 0;
      for (int k = 1; k <= arr1[i][j]; k++)
      {
        if (arr1[i][j] % k == 0)
        {
          f++;
        }
      }
      if (f == 2)
      {
        sum += arr1[i][j];
      }
    }
  }
  return sum;
}
int main()
{
  int n, m, sum = 0;
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
  printf("The Sum of Prime Numbers in the array = %d", primeSum(n, m, arr));
  return 0;
}