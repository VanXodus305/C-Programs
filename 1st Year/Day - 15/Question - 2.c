#include <stdio.h>
int factorial(int x)
{
  int f = 1;
  for (int i = 1; i <= x; i++)
  {
    f *= i;
  }
  return f;
}
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("The factorial of %d = %d", n, factorial(n));
  return 0;
}