#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char file1[100], file2[100], str1[1000], str2[1000];
  printf("Enter the location of the first file: ");
  scanf("%[^\n]s", file1);
  FILE *fp1 = fopen(file1, "r");
  printf("Enter the location of the second file: ");
  scanf(" %[^\n]s", file2);
  FILE *fp2 = fopen(file2, "r");
  fgets(str1, 1000, fp1);
  fgets(str2, 1000, fp2);
  if ((strcmp(str1, str2)) == 0)
  {
    printf("The contents of the files are same.");
  }
  else
  {
    printf("The contents of the files are not same.");
  }
  return 0;
}