#include <stdio.h>
void getSum(int x)
{
  int sum = 0;
  while (x > 0)
  {
    sum += x % 10;
    x = x / 10;
  }
  if (sum < 10)
  {
    printf("Sum of the digits upto single digit = %d", sum);
    return;
  }
  else
  {
    getSum(sum);
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  getSum(n);
  return 0;
}