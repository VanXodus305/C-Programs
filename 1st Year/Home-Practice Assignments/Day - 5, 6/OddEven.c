#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a % 2 == 0)
  {
    printf("It is an Even Number.");
  }
  else
  {
    printf("It is an Odd Number.");
  }
  return 0;
}