#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  char ch;
  if (fp == NULL)
  {
    printf("Error Opening File.");
    exit(0);
  }
  printf("Content of test.txt:\n");
  while ((ch = fgetc(fp)) != EOF)
  {
    printf("%c", ch);
  }
  fclose(fp);
}