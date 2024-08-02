// WAP to perform transpose of a given sparse matrix in 3-tuple format.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int temp, rows;
  printf("Enter the number of number of rows in the sparse matrix: ");
  scanf("%d", &rows);
  int matrix[rows][3];
  printf("Enter the sparse matrix in 3-tuple format: \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 1; j < rows - i; j++)
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
    temp = matrix[rows - i - 1][0];
    matrix[rows - i - 1][0] = matrix[rows - i - 1][1];
    matrix[rows - i - 1][1] = temp;
  }

  printf("The transpose of the given sparse matrix is:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}