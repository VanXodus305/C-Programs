#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  char ch;
  int c = 0;
  if (fp == NULL)
  {
    printf("Error Opening File.");
    exit(0);
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch == ' ')
    {
      c++;
    }
  }
  if (c > 0)
  {
    c++;
  }
  printf("Number of words in test.txt: %d", c);
  fclose(fp);
  return (0);
}