#include <stdio.h>
int isPrime(int x)
{
  int c = 0;
  for (int i = 1; i <= x; i++)
  {
    if (x % i == 0)
    {
      c++;
    }
  }
  if (c == 2)
  {
    printf("%d ", x);
  }
}
int main()
{
  printf("Prime Numbers between 1 and 100:\n");
  for (int i = 1; i <= 100; i++)
  {
    isPrime(i);
  }
  return 0;
}