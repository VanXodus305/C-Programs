#include <stdio.h>
int main(void)
{
  int n, m, sum = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr[n][m];
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
      if (i != j && j > i)
      {
        sum += arr[i][j];
      }
    }
  }
  printf("Given Matrix:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("Sum of the Upper Triangle = %d", sum);
  return 0;
}