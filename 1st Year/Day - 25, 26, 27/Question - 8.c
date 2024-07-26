#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int *p = (int *)malloc(n * sizeof(int));
  int max = *p;
  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
    if (*(p + i) > max)
    {
      max = *(p + i);
    }
  }
  printf("Largest number in the array = %d", max);
  return 0;
}