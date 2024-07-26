#include <stdio.h>
int getSum(int x)
{
  int sum = 0;
  if (x == 0)
  {
    return 0;
  }
  else
  {
    return (x % 10) + getSum(x / 10);
  }
}
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
  printf("Sum of the digits of the number: %d", getSum(n));
  return 0;
}