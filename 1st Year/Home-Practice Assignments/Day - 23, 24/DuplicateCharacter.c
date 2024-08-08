#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Modified String: ");
  for (int i = 0; i < strlen(text); i++)
  {
    if (text[i] != ' ' && text[i] != '\n')
    {
      if (strchr(text, text[i]) != &text[i])
      {
        continue;
      }
      printf("%c", text[i]);
    }
  }
  return 0;
}