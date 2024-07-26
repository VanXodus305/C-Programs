#include <stdio.h>
#include <string.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  char *token = strtok(text, " ");
  char *word = token;
  int max = strlen(token);
  while (token != NULL)
  {
    if (strlen(token) > max)
    {
      max = strlen(token);
      word = token;
    }
    token = strtok(NULL, " ");
  }
  printf("Largest word in the string: %s", word);
  return 0;
}