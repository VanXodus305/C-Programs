#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  printf("Enter a string:\n");
  scanf("%[^\n]s", &text);
  printf("Modified String:\n");
  for (int i = 0; i <= strlen(text); i++)
  {
    if (i == 0 || text[i - 1] == ' ')
    {
      printf("%c", toupper(text[i]));
    }
    else
    {
      printf("%c", text[i]);
    }
  }
  return 0;
}