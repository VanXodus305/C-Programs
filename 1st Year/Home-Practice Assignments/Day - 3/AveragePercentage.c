#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  float avg, per;
  printf("Enter the marks of the first subject: ");
  scanf("%d", &a);
  printf("Enter the marks of the second subject: ");
  scanf("%d", &b);
  printf("Enter the marks of the third subject: ");
  scanf("%d", &c);
  printf("Enter the marks of the fourth subject: ");
  scanf("%d", &d);
  printf("Enter the marks of the fifth subject: ");
  scanf("%d", &e);
  avg = (a + b + c + d + e) / 5;
  per = ((a + b + c + d + e) * 100) / 1000;
  printf("Average: %0.2f\n", avg);
  printf("Percentage: %0.2f", per);
  return 0;
}
