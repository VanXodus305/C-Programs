#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter the three sides of a triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a == b == c)
  {
    printf("It is an Equilateral Triangle.");
  }
  else if (a == b || b == c || a == c)
  {
    printf("It is an Isosceles Triangle.");
  }
  else
  {
    printf("It is a Scalene Traingle.");
  }
  return 0;
}