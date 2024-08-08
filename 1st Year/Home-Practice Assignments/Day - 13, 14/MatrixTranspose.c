#include <stdio.h>
int main()
{
  int n, m, odd = 0, even = 0;
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
  printf("Transpose of the Matrix:\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d\t", arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}
