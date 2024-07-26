#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp = fopen("./.tmp/test.txt", "w");
  char c, ch[] = "From the small beginnings KIIT has developed into a leading university";
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