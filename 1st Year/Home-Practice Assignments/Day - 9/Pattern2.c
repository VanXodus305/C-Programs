#include <stdio.h>
int main(void)
{
  int n, count = 1;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 64 + i; j >= 65; j--)
    {
      printf("%c", j);
    }
    printf("\n");
  }
  return 0;
}