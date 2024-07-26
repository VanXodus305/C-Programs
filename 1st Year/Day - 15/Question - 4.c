#include <stdio.h>
int prime(int x)
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
    printf("It is a Prime Number.");
  }
  else
  {
    printf("It is not a Prime Number.");
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  prime(n);
  return 0;
}