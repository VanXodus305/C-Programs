#include <stdio.h>
union ABC
{
  char a;
  int b;
  double c;
};
int main()
{
  union ABC abc;
  printf("Enter the values one by one:\n");
  printf("Enter a Character: ");
  scanf("%c", &abc.a);
  printf("Character: %c", abc.a);
  printf("\nEnter an Integer: ");
  scanf("%d", &abc.b);
  printf("Integer: %d", abc.b);
  printf("\nEnter a Double: ");
  scanf("%lf", &abc.c);
  printf("Double: %lf", abc.c);
  printf("\nEnter the values together:\n");
  scanf(" %c\n%d\n%lf", &abc.a, &abc.b, &abc.c);
  printf("\nCharacter: %c", abc.a);
  printf("\nInteger: %d", abc.b);
  printf("\nDouble: %lf", abc.c);
  return 0;
}