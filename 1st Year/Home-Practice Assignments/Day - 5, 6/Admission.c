#include <stdio.h>
int main()
{
  int p, c, m;
  printf("Enter marks in Maths: ");
  scanf("%d", &m);
  printf("Enter marks in Physics: ");
  scanf("%d", &p);
  printf("Enter marks in Chemistry: ");
  scanf("%d", &c);
  if ((m >= 65 && p >= 55 && c >= 50 && p + c + m >= 190) || m + p >= 140)
  {
    printf("The canditate is eligible for admission.");
  }
  else
  {
    printf("The candidate is not eligible for admission.");
  }
  return 0;
}
