#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp1 = fopen("./.tmp/test.txt", "r");
  FILE *fp2 = fopen("./.tmp/new.txt", "w");
  char ch;
  if (fp1 == NULL || fp2 == NULL)
  {
    printf("Error Opening File.");
    exit(0);
  }
  while ((ch = fgetc(fp1)) != EOF)
  {
    fputc(ch, fp2);
  }
  fclose(fp1);
  fclose(fp2);
  fp2 = fopen("./.tmp/new.txt", "r");
  printf("Contents of new.txt:\n");
  while ((ch = fgetc(fp1)) != EOF)
  {
    printf("%c", ch);
  }
  fclose(fp2);
  return (0);
}