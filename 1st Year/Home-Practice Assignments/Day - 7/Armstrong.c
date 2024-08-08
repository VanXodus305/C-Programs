#include <stdio.h>
#include <math.h>
int main()
{
  int a, temp, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &a);
  temp = a;
  while (temp > 0)
  {
    sum += pow((temp % 10), 3);
    temp = temp / 10;
  }
  if (sum == a)
  {
    printf("It is an Armstrong Number.");
  }
  else
  {
    printf("It is not an Armstrong Number.");
  }
  return 0;
}