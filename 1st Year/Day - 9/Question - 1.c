/*
  1 + 2^2 + 3^3 + …… + n^n
*/

#include <stdio.h>
#include <math.h>
int main()
{
  int n, sum = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum += pow(i, i);
    /* USING NESTED LOOPS:
      int val = i;
      for (int j = 1; j < i; j ++) {
        val *= i;
      }
      sum = sum + val;
    */
  }
  printf("The sum of the series = %d", sum);
  return 0;
}