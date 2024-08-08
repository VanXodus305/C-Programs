#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "r");
  int c = -1, fac = 1;
  char ch;
  if (fp == NULL)
  {
    printf("Error Opening File");
    exit(0);
  }
  fscanf(fp, "%d", &c);
  if (c == -1)
  {
    printf("File contains no number.");
    exit(0);
  }
  fclose(fp);
  for (int i = 1; i <= c; i++)
  {
    fac *= i;
  }
  fp = fopen("./.tmp/test.txt", "a");
  fprintf(fp, "\n%d", fac);
  fclose(fp);
  fp = fopen("./.tmp/test.txt", "r");
  printf("Content of test.txt:\n");
  while ((ch = fgetc(fp)) != EOF)
  {
    printf("%c", ch);
  }
  fclose(fp);
}