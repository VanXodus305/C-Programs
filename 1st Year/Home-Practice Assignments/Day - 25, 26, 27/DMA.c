#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int *ptr1, *ptr2;
  ptr1 = (int *)malloc(n * sizeof(int));
  if (ptr1 == NULL)
  {
    printf("Memory allocation failed using malloc()\n");
    exit(0);
  }
  printf("Memory successfully allocated using malloc()\n");
  ptr2 = (int *)calloc(n, sizeof(int));
  if (ptr2 == NULL)
  {
    printf("Memory allocation failed using calloc()\n");
    exit(0);
  }
  printf("Memory successfully allocated using calloc()\n");
  free(ptr1);
  free(ptr2);
  printf("Memory successfully freed");
  return 0;
}
