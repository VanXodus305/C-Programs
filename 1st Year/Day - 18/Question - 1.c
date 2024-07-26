#include <stdio.h>
int factorial(int x)
{
  if (x == 1)
  {
    return 1;
  }
  else
  {
    return x * factorial(x - 1);
  }
}
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("The factorial of %d = %d", n, factorial(n));
  return 0;
}