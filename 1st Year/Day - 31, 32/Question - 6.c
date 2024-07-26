#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  char ch, str[1000];
  int c = 0;
  if (fp == NULL)
  {
    printf("Error Opening File");
    exit(0);
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    str[c++] = toupper(ch);
  }
  fclose(fp);
  fp = fopen("./.tmp/test.txt", "w");
  fputs(str, fp);
  fclose(fp);
  fp = fopen("./.tmp/test.txt", "r");
  printf("Content of test.txt:\n");
  while ((ch = fgetc(fp)) != EOF)
  {
    printf("%c", ch);
  }
  fclose(fp);
}