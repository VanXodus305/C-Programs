#include <stdio.h>
#include <stdlib.h>
int main()
{
  char ch, file[100];
  printf("Enter the location of the file: ");
  scanf("%[^\n]s", file);
  FILE *fp = fopen(file, "r");
  if (fp == NULL)
  {
    printf("Filepath Does Not Exist.");
  }
  else
  {
    printf("Filepath Exists.");
    fclose(fp);
  }
  return 0;
}