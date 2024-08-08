#include <stdio.h>
union byte
{
  unsigned int a;
  unsigned char s[4];
};
union byte bt;
int main()
{
  char i;
  printf("Enter an unsigned integer: ");
  scanf("%u", &bt.a);
  printf("\nIndividual bytes: ");
  for (i = 3; i >= 0; i--)
  {
    printf("%02X ", bt.s[i]);
  }
  return 0;
}