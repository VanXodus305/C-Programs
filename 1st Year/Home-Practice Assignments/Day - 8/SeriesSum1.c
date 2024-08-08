#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter the value of 'n': ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      sum += j;
    }
  }
  printf("The sum of the series = %d", sum);
  return 0;
}
