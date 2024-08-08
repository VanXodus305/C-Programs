#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  int c = 0, d = 0, v = 0;
  char ch, str[1000], *words[500], word[100];
  if (fp == NULL)
  {
    printf("Error Opening File");
    exit(0);
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    str[c++] = ch;
  }
  fclose(fp);
  char *token = strtok(str, " ");
  while (token != NULL)
  {
    words[d++] = token;
    token = strtok(NULL, " ");
  }
  printf("Enter the word to search for: ");
  scanf("%s", word);
  for (int i = 0; i < d; i++)
  {
    if (strcasecmp(word, words[i]) == 0)
    {
      v++;
    }
  }
  printf("Frequency of %s: %d times", word, v);
}