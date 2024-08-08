#include <stdio.h>
int decToBin(int n)
{
  if ((n / 2) == 0)
  {
    return (n % 2);
  }
  else
  {
    return ((decToBin(n / 2) * 10) + (n % 2));
  }
}
int main()
{
  printf("Enter a number: ");
  int x;
  scanf("%d", &x);
  printf("Binary: %d", decToBin(x));
}