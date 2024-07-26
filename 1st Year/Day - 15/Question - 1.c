#include <stdio.h>
int sum(int x, int y)
{
  return x + y;
}
int main()
{
  int a, b;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  printf("The sum is: %d", sum(a, b));
  return 0;
}