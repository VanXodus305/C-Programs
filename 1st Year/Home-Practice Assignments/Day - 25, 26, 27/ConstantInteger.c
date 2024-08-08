#include <stdio.h>
int main()
{
  const int a;
  printf ("Enter the value of A: ");
  scanf ("%d", &a);
  const int *ptr = &a;
  printf ("Enter the new value of A: ");
  int *ptr2 = (int *)ptr;
  scanf("%d", *ptr2);
  *ptr2 = 20;
  printf("The value of a is now %d\n", a);
  return 0;
}
