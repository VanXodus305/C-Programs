#include <stdio.h>
int main()
{
  float arr1[2][2];
  float arr2[2][2];
  printf("Enter the elements of Matrix 1:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%f", &arr1[i][j]);
    }
  }
  printf("Enter the elements of Matrix 2:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%f", &arr2[i][j]);
    }
  }
  printf("Sum of the matrix:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%0.1f\t", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
  return 0;
}