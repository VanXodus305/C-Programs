#include <stdio.h>
int main()
{
  int n, m, f = 0;
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
      if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0))
      {
        f = 1;
      }
    }
  }
  if (f == 0)
  {
    printf("It is an Identity Matrix.");
  }
  else
  {
    printf("It is not an Identity Matrix.");
  }
  return 0;
}
