#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text1[100], text2[100], s[100], c, v = 0;
  printf("Enter the first string: ");
  gets(text1);
  printf("Enter the second string: ");
  gets(text2);
  printf("Common characters between the strings: ");
  for (int i = 0; i < strlen(text1); i++)
  {
    if (text1[i] != ' ' && text1[i] != '\n')
    {
      if (strchr(text1, text1[i]) != &text1[i])
      {
        continue;
      }
      for (int j = 0; j < strlen(text2); j++)
      {
        if (toupper(text2[j]) == toupper(text1[i]))
        {
          s[v++] = text1[i];
          break;
        }
      }
    }
  }
  for (int i = 0; i < strlen(s); i++)
  {
    for (int j = 1; j < strlen(s) - i; j++)
    {
      if (toupper(s[j - 1]) > toupper(s[j]))
      {
        c = s[j - 1];
        s[j - 1] = s[j];
        s[j] = c;
      }
    }
  }
  for (int i = 0; i < strlen(s); i++)
  {
    printf("%c ", s[i]);
  }
}