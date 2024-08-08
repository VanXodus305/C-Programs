#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("The factors of the number are:\n");
  for (int i = 1; i <= a; i++)
  {
    if (a % i == 0)
    {
      printf("%d ", i);
    }
  }
  return 0;
}