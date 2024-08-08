#include <stdio.h>
#include <math.h>
int main(void)
{
  int x, n;
  float sum = 0;
  printf("Enter the values of x and n:\n");
  scanf("%d %d", &x, &n);
  for (int i = 0; i < n * 2; i += 2)
  {
    int fact = 1;
    for (int j = 1; j <= i; j++)
    {
      fact *= j;
    }
    sum += pow(x, i) / fact;
  }
  printf("The sum of the series upto %d terms = %0.2f", n, sum);
  return 0;
}