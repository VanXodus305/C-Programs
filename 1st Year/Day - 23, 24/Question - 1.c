#include <stdio.h>
#include <string.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("The length of the string is = %d", strlen(text));
  return 0;
}