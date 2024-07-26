#include <stdio.h>
int fibonacci(int x)
{
  int a = 0, b = 1;
  int c = a + b;
  if (x == 0 || x == 1)
  {
    return x - 1;
  }
  else
  {
    for (int i = 1; i <= x - 2; i++)
    {
      c = a + b;
      a = b;
      b = c;
    }
  }
  return c;
}
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("The value in the Fibonacci Series = %d", fibonacci(n));
  return 0;
}