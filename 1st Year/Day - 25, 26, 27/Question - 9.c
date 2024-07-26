#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, m;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int *p = (int *)calloc(n, sizeof(int));
  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
  }
  printf("Original Array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(p + i));
  }
  printf("\nEnter the new size of the array: ");
  scanf("%d", &m);
  if (m > n)
  {
    p = (int *)realloc(p, m * sizeof(int));
    printf("Enter the new elements:\n");
    for (int i = n; i < m; i++)
    {
      scanf("%d", (p + i));
    }
    printf("Modified Array:\n");
    for (int i = 0; i < m; i++)
    {
      printf("%d ", *(p + i));
    }
  }
  free(p);
  return 0;
}