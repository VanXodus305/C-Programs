#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  int c = 0, d = 0;
  char ch, str[2000], *para[50];
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
  char *token = strtok(str, "\n\n");
  while (token != NULL)
  {
    para[d++] = token;
    token = strtok(NULL, "\n\n");
  }
  for (int i = 0; i < d; i++)
  {
    int v = 0;
    token = strtok(para[i], " ");
    while (token != NULL)
    {
      v++;
      token = strtok(NULL, " ");
    }
    printf("\nWords in Paragraph - %d: %d", (i + 1), v);
  }
}