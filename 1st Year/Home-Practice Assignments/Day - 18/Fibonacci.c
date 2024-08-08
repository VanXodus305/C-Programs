#include <stdio.h>
int fibonacci(int x, int a, int b)
{
  if (x == 1)
  {
    return a;
  }
  else if (x == 2)
  {
    return b;
  }
  else
  {
    return fibonacci(x - 1, b, a + b);
  }
}
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("The value in the Fibonacci Series = %d", fibonacci(n, 0, 1));
  return 0;
}