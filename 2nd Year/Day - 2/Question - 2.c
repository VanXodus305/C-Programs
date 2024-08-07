// ©️ Soumyadeep Kundu [2305820]
// Write a program to perform the following operations on a given square matrix using functions:
// i. Find the no.of nonzero elements
// ii. Display upper triangular matrix
// iii. Display the elements of just above and below the main

#include <stdio.h>

void nonZeroElements(int *n, int matrix[*n][*n])
{
  int count = 0;
  for (int i = 0; i < *n; i++)
  {
    for (int j = 0; j < *n; j++)
    {
      if (matrix[i][j] != 0)
      {
        count++;
      }
    }
  }
  printf("Non-zero elements in the matrix: %d\n", count);
}

void upperTriangularMatrix(int *n, int matrix[*n][*n])
{
  printf("Upper triangular matrix:\n");
  for (int i = 0; i < *n; i++)
  {
    for (int j = 0; j < *n; j++)
    {
      if (i < j)
      {
        printf("%d\t", matrix[i][j]);
      }
      else
      {
        printf("\t");
      }
    }
    printf("\n");
  }
}

void diagonalElements(int *n, int matrix[*n][*n])
{
  printf("Elements above the main diagonal:\n");
  for (int i = 0; i < *n; i++)
  {
    for (int j = 0; j < *n; j++)
    {
      if (i < j)
      {
        printf("%d\t", matrix[i][j]);
      }
      else
      {
        printf("\t");
      }
    }
    printf("\n");
  }
  printf("Elements below the main diagonal:\n");
  for (int i = 0; i < *n; i++)
  {
    for (int j = 0; j < *n; j++)
    {
      if (i > j)
      {
        printf("%d\t", matrix[i][j]);
      }
      else
      {
        printf("\t");
      }
    }
    printf("\n");
  }
}

void main()
{
  int n;
  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);
  int matrix[n][n];
  printf("Enter the elements of the square matrix:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
  nonZeroElements(&n, matrix);
  upperTriangularMatrix(&n, matrix);
  diagonalElements(&n, matrix);
}
