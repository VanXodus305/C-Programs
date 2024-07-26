#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, sum = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int *p = (int *)malloc(n * sizeof(int));
  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
    sum += *(p + i);
  }
  printf("Sum of the numbers = %d", sum);
  return 0;
}