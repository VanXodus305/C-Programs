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
    int v = 1;
    if (text[i] != ' ' && text[i] != '\n')
    {
      if (text[i] == text[i - 1])
      {
        continue;
      }
      printf("%c", text[i]);
    }
  }
  return 0;
}