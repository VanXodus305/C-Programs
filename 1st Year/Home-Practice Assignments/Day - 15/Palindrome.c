#include <stdio.h>
int isPalindrome(int x)
{
  int rev = 0;
  int temp = x;
  while (temp > 0)
  {
    rev = (rev * 10) + (temp % 10);
    temp = temp / 10;
  }
  if (rev == x)
  {
    printf("It is a Palindrome Number.");
  }
  else
  {
    printf("It is not a Palindrome Number.");
  }
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  isPalindrome(n);
  return 0;
}