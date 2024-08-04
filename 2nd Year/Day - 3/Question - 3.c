// WAP to represent the polynomial of single variable using 1-D array and perform the addition of two polynomial equations.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int n;
  printf("Enter maximum degree of x: ");
  scanf("%d", &n);
  int **polynomials = (int **)malloc(2 * sizeof(int *));
  for (int i = 0; i < 2; i++)
  {
    printf("Enter Polynomial-%d from lowest degree to highest degree: ", i + 1);
    polynomials[i] = (int *)malloc((n + 1) * sizeof(int));
    for (int j = 0; j <= n; j++)
    {
      scanf("%d", polynomials[i] + j);
    }
  }

  printf("Resultant Polynomial: ");
  for (int i = n; i > 0; i--)
  {
    printf("%dx^%d + ", polynomials[0][i] + polynomials[1][i], i);
  }
  printf("%dx^0\n", polynomials[0][0] + polynomials[1][0]);
}