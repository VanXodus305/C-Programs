#include <stdio.h>
int main()
{
  int a, b;
  int *p = &a, *q = &b;
  printf("Enter two numbers: ");
  scanf("%d %d", p, q);
  printf("Product of the 2 numbers = %d", *p * *q);
  return 0;
}