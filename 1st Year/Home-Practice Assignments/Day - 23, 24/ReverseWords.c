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
  printf("Modified sentence: %s", text2);
  for (int i = (c - 1); i >= 0; i--)
  {
    printf("%s ", words[i]);
  }
  return 0;
}