#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int s, t;
  printf("Enter a string: ");
  gets(text);
  for (int i = 0; i < strlen(text); i++)
  {
    if (text[i] != ' ')
    {
      s = i;
      break;
    }
  }
  for (int i = (strlen(text) - 1); i >= 0; i--)
  {
    if (text[i] != ' ')
    {
      t = i;
      break;
    }
  }
  printf("Modified String: ");
  for (int i = 0; i < strlen(text); i++)
  {
    if (i >= s && i <= t)
    {
      printf("%c", text[i]);
    }
  }
  return 0;
}