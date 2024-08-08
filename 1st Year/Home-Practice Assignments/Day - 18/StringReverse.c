#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char text[], int len)
{
  if (len != 0)
  {
    reverse(text, len - 1);
  }
  printf("%c", text[len]);
}

int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Reverse of the string: ");
  reverse(text, strlen(text) - 1);
  return 0;
}