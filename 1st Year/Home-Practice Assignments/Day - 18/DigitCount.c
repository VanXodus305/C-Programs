#include <stdio.h>
int digitCount(int x)
{
  if (x == 0)
  {
    return 0;
  }
  else
  {
    return 1 + digitCount(x / 10);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Number of digits in the number: %d\n", digitCount(n));
  return 0;
}