// ©️ Soumyadeep Kundu [2305820]
// WAP to represent a given sparse matrix in 3-tuple format using 2-D array.

#include <stdio.h>

void main()
{
  int m, n, count = 0;
  printf("Enter the size of the matrix: ");
  scanf("%d %d", &m, &n);
  int matrix[m][n];
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matrix[i][j]);
      if (matrix[i][j] != 0)
      {
        count++;
      }
    }
  }
  int sparseMatrix[count + 1][3];
  sparseMatrix[0][0] = m;
  sparseMatrix[0][1] = n;
  sparseMatrix[0][2] = count;
  count = 1;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] != 0)
      {
        sparseMatrix[count][0] = i;
        sparseMatrix[count][1] = j;
        sparseMatrix[count][2] = matrix[i][j];
        count++;
      }
    }
  }
  printf("3-tuple format of the given sparse matrix:\n");
  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", sparseMatrix[i][j]);
    }
    printf("\n");
  }
}