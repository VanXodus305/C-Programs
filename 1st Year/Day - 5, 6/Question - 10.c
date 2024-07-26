#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, d;
  float r1, r2;
  printf("Enter the values of a, b, c of the quadratic equation:\n");
  scanf("%f %f %f", &a, &b, &c);
  d = (b * b) - (4 * a * c);
  switch (d >= 0)
  {
  case 1:
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    printf("The roots of the equation are: %f and %f", r1, r2);
    break;
  case 0:
    printf("The equation does not have any real roots.");
    break;
  }
  return 0;
}