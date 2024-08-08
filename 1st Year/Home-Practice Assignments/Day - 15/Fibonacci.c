#include <stdio.h>
void isFibonacci(int x, int y, int z)
{
  int a = 0, b = 1;
  int c = a + b;
  if (z == x || z == y)
  {
    printf("It is a part of the Fibonacci Series.");
    return;
  }
  else
  {
    if ((x + y) > z)
    {
      printf("It is not a part of the Fibonacci Series.");
      return;
    }
    else if ((x + y) == z)
    {
      printf("It is a part of the Fibonacci Series.");
      return;
    }
    isFibonacci(y, x + y, z);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  isFibonacci(0, 1, n);
  return 0;
}