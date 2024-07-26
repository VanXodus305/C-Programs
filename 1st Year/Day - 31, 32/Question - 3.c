#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  fp = fopen("./.tmp/test.txt", "a");
  char c, ch[] = " with a strong interdisciplinary culture and a commitment to teaching excellence";
  fputs(ch, fp);
  fclose(fp);
  fp = fopen("./.tmp/test.txt", "r");
  printf("Content of test.txt:\n");
  while ((c = fgetc(fp)) != EOF)
  {
    printf("%c", c);
  }
  fclose(fp);
}