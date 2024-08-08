#include <stdio.h>
int main(void)
{
  int a;
  printf("Enter the amount in paise: ");
  scanf("%d", &a);
  printf("Amount = %d rupees and %d paise.", a / 100, a % 100);
  return 0;
}
