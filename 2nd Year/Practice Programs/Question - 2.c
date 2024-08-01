// Write a program to store elements in a 2-D Array using pointers and then also display the elements

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int row, column;
  printf("Enter the row size of the matrix: ");
  scanf("%d", &row);
  printf("Enter the column size of the matrix: ");
  scanf("%d", &column);
  int **ptr = (int **)malloc(row * sizeof(int *));
  for (int i = 0; i < row; i++)
  {
    ptr[i] = (int *)malloc(column * sizeof(int));
  }
  printf("Enter the elements of the matrix: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      scanf("%d", *(ptr + i) + j);
    }
  }
  printf("The elements of the matrix are: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d ", *(*(ptr + i) + j));
    }
    printf("\n");
  }
}
