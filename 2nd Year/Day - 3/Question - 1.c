// ©️ Soumyadeep Kundu [2305820]
// WAP to perform transpose of a given sparse matrix in 3-tuple format.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int **matrix = (int **)malloc(sizeof(int *)), temp;
  matrix[0] = (int *)malloc(3 * sizeof(int));
  printf("Enter the sparse matrix in 3-tuple format: \n");
  for (int i = 0; i < 3; i++)
    scanf("%d", matrix[0] + i);
  matrix = (int **)realloc(matrix, (matrix[0][2] + 1) * sizeof(int *));
  for (int i = 1; i < matrix[0][2] + 1; i++)
  {
    matrix[i] = (int *)malloc(3 * sizeof(int));
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", matrix[i] + j);
    }
  }

  for (int i = 0; i < matrix[0][2] + 1; i++)
  {
    for (int j = 1; j < matrix[0][2] + 1 - i; j++)
    {
      if (j - 1 != 0 && matrix[j][1] < matrix[j - 1][1])
      {
        for (int k = 0; k < 3; k++)
        {
          temp = matrix[j][k];
          matrix[j][k] = matrix[j - 1][k];
          matrix[j - 1][k] = temp;
        }
      }
    }
    temp = matrix[matrix[0][2] - i][0];
    matrix[matrix[0][2] - i][0] = matrix[matrix[0][2] - i][1];
    matrix[matrix[0][2] - i][1] = temp;
  }

  printf("The transpose of the given sparse matrix is:\n");
  for (int i = 0; i < matrix[0][2] + 1; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}