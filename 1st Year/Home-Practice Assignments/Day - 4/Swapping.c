#include <stdio.h>
int main(void)
{
  int a, b;
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("\nEnter the second integer: ");
  scanf("%d", &b);
  printf("\nBefore swapping: \n");
  printf("First integer: %d\tSecond integer: %d", a, b);
  a += b -= a = b - a;
  printf("\nAfter swapping: \n");
  printf("First integer: %d\tSecond integer: %d", a, b); 
  return 0;
}
