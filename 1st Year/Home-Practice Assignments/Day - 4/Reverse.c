#include <stdio.h>
int main()
{
  int m, sum;
  printf("Enter a three digit number: \n");
  scanf("%d", &m);
  int f = m / 100;
  int l = m % 10;
  int k = (m - (f * 100)) / 10;
  printf("Reverse of the number: %d\n", (l * 100) + (k * 10) + f);
  return 0;
}
