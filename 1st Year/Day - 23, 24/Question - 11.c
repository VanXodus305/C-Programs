#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100], text2[100];
  char *words[100];
  int c = 0;
  printf("Enter a sentence: ");
  scanf("%[^\n]s", text);
  char *token = strtok(text, " ");
  while (token != NULL)
  {
    words[c++] = token;
    token = strtok(NULL, " ");
  }
  for (int i = 0; i < c; i++)
  {
    int v = 0;
    for (int j = 0; j < i; j++)
    {
      if (strcmp(words[i], words[j]) == 0)
      {
        v = 1;
        break;
      }
    }
    if (v == 0)
    {
      strcat(text2, words[i]);
      strcat(text2, " ");
    }
  }
  printf("Modified sentence: %s\n", text2);
  return 0;
}