#include <stdio.h>
int zeroCount(int x)
{
  int c = 0;
  while (x > 0)
  {
    if ((x % 10) == 0)
    {
      c++;
    }
    x = x / 10;
  }
  return c;
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The number of zeros in the %d: %d", n, zeroCount(n));
  return 0;
}