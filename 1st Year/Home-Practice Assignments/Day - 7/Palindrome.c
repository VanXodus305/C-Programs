#include <stdio.h>
int main()
{
  int a, temp, rev = 0;
  printf("Enter a number: ");
  scanf("%d", &a);
  temp = a;
  while (temp > 0)
  {
    rev = rev * 10 + (temp % 10);
    temp = temp / 10;
  }
  if (rev == a)
  {
    printf("It is a Palindrome Number.");
  }
  else
  {
    printf("It is not a Palindrome Number.");
  }
  return 0;
}