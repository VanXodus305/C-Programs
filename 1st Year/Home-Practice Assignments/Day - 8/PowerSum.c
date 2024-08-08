#include <stdio.h>
#include <math.h>
int main()
{
  int n, x, fact = 1;
  printf("Enter the value of 'x': ");
  scanf("%d", &x);
  printf("Enter the value of 'n': ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  printf("The value of x^%d/%d! = %0.2f", n, n, (float)(pow(x, n) / fact));
  return 0;
}