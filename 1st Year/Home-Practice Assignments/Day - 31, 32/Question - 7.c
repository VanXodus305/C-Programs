#include <stdio.h>
#include <stdlib.h>
int main()
{
  char file[100];
  printf("Enter the location of the file: ");
  scanf("%[^\n]s", file);
  FILE *fp = fopen(file, "r");
  if (fp == NULL)
  {
    printf("File Does Not Exist.");
    exit(0);
  }
  fclose(fp);
  remove(file);
  printf("File deleted successfully");
  return 0;
}