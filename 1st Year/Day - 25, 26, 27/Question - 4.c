#include <stdio.h>
#include <string.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  char *p = text;
  printf("Reverse of the string: ");
  for (int i = (strlen(p) - 1); i >= 0; i--)
  {
    printf("%c", *(p + i));
  }
}