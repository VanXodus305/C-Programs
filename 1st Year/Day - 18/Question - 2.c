#include <stdio.h>
int hcf(int x, int y, int f)
{
  if ((x % f == 0) && (y % f == 0))
  {
    return f;
  }
  else
  {
    return hcf(x, y, (f - 1));
  }
}
int main()
{
  int n, m;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &n, &m);
  printf("The HCF of %d and %d = %d", n, m, hcf(n, m, (m > n) ? n : m));
  return 0;
}