#include <stdio.h>
int main()
{
  int a, b;
  int *p = &a, *q = &b;
  printf("Enter two numbers: ");
  scanf("%d %d", p, q);
  printf("Original Values: A = %d, B = %d", *p, *q);
  p = &b;
  q = &a;
  printf("\nSwapped Values: A = %d, B = %d", *p, *q);
  return 0;
}