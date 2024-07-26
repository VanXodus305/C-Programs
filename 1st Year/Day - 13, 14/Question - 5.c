#include <stdio.h>
int main()
{
  int n, m, f = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr1[n][m];
  int arr2[n][m];
  printf("Enter the elements of Matrix 1:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("Enter the elements of Matrix 2:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr1[i][j] != arr2[i][j])
      {
        f++;
        break;
      }
    }
  }
  if (f == 0)
  {
    printf("The two matrices are equal.");
  }
  else
  {
    printf("The two matrices are not equal.");
  }
  return 0;
}