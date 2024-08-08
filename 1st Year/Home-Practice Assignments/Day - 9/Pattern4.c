#include <stdio.h>
int main(void)
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}