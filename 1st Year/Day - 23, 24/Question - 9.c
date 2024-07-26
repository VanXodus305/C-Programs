#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100], c;
  printf("Enter a string: ");
  gets(text);
  printf("Enter character to replace: \n");
  scanf("%c", &c);
  for (int i = 0; i < strlen(text); i++)
  {
    if ((text[i] == c) && (i - 2 >= 0))
    {
      text[i] = text[i - 2];
    }
  }
  printf("Modified String: %s", text);
  return 0;
}