#include <stdio.h>
int main(void)
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = i; j >= 1; j--)
      {
        printf("%d ", j);
      }
    }
    else
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d ", j);
      }
    }
    printf("\n");
  }
  return 0;
}