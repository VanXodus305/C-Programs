#include <stdio.h>
void swap(int x, int y)
{
  x = x + y;
  y = x - y;
  x = x - y;
  printf("After swapping:\nA = %d, B = %d", x, y);
}
int main()
{
  int a, b;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  printf("Before swapping:\nA = %d, B = %d\n", a, b);
  swap(a, b);
  return 0;
}