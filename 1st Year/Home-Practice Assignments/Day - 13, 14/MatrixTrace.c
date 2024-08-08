#include <stdio.h>
int main()
{
  int n, m, sum = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr[n][m];
  printf("Enter the elements of the Matrix\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
      if (i == j)
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
  printf("Sum of Diagonal Elements = %d", sum);
  return 0;
}
