/*
  1 3 7 15 31 ……
*/

#include <stdio.h>
#include <math.h>
int main()
{
  int n, count = 1;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d\t", count);
    count += pow(2, i);
    /* ANOTHER LOGIC:
      count = (count * 2) + 1;
    */
  }
  return 0;
}