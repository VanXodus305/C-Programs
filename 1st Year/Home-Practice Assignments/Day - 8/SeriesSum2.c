#include <stdio.h>
int main()
{
  int n;
  float sum = 0;
  printf("Enter the value of 'n': ");
  scanf("%d", &n);
  for (float i = 1; i <= n; i++)
  {
    sum += (1 / i);
  }
  printf("The sum of the series = %f", sum);
  return 0;
}