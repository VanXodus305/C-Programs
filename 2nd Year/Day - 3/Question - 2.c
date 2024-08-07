// ©️ Soumyadeep Kundu [2305820]
// WAP to perform addition of two given sparse matrix in 3–tuple format.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int ***matrix = (int ***)malloc(2 * sizeof(int **));
  for (int k = 0; k < 2; k++)
  {
    matrix[k] = (int **)malloc(sizeof(int *));
    matrix[k][0] = (int *)malloc(3 * sizeof(int));
    printf("Enter sparse matrix - %d in 3-tuple format: \n", k + 1);
    for (int i = 0; i < 3; i++)
    {
      scanf("%d", matrix[k][0] + i);
    }
    matrix[k] = (int **)realloc(matrix[k], (matrix[k][0][2] + 1) * sizeof(int *));
    for (int i = 1; i <= matrix[k][0][2]; i++)
    {
      matrix[k][i] = (int *)malloc(3 * sizeof(int));
      for (int j = 0; j < 3; j++)
      {
        scanf("%d", matrix[k][i] + j);
      }
    }
  }

  int **result = (int **)malloc(sizeof(int *)), count = 0, index = 1;
  result[0] = (int *)malloc(3 * sizeof(int));
  result[0][0] = matrix[0][0][0];
  result[0][1] = matrix[0][0][1];
  int largerMatrix = matrix[0][matrix[0][0][2]][0] >= matrix[1][matrix[1][0][2]][0] && matrix[0][matrix[0][0][2]][1] > matrix[1][matrix[1][0][2]][1] ? 0 : 1;
  int smallerMatrix = largerMatrix == 0 ? 1 : 0;
  for (int i = 1; i <= matrix[largerMatrix][0][2]; i++)
  {
    int value = matrix[largerMatrix][i][2];
    for (int j = index; j <= matrix[smallerMatrix][0][2]; j++)
    {
      if (matrix[smallerMatrix][j][0] <= matrix[largerMatrix][i][0] && matrix[smallerMatrix][j][1] < matrix[largerMatrix][i][1])
      {
        result = (int **)realloc(result, (++count + 1) * sizeof(int *));
        result[count] = (int *)malloc(3 * sizeof(int));
        result[count][0] = matrix[smallerMatrix][j][0];
        result[count][1] = matrix[smallerMatrix][j][1];
        result[count][2] = matrix[smallerMatrix][j][2];
        index = j + 1;
      }
      else if (matrix[smallerMatrix][j][0] == matrix[largerMatrix][i][0] && matrix[smallerMatrix][j][1] == matrix[largerMatrix][i][1])
      {
        value += matrix[smallerMatrix][j][2];
        index = j + 1;
      }
    }
    result = (int **)realloc(result, (++count + 1) * sizeof(int *));
    result[count] = (int *)malloc(3 * sizeof(int));
    result[count][0] = matrix[largerMatrix][i][0];
    result[count][1] = matrix[largerMatrix][i][1];
    result[count][2] = value;
  }
  result[0][2] = count;

  printf("Resultant Matrix in 3-tuple format:\n");
  for (int i = 0; i <= result[0][2]; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}