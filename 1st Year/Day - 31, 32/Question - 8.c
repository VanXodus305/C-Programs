#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char file[100];
  int j;
  printf("Enter the file name: ");
  scanf("%[^\n]s", file);
  FILE *fp = fopen(file, "r");
  if (fp == NULL)
  {
    printf("Error Opening File.");
    exit(0);
  }
  fclose(fp);
  printf("Choose which program to execute: ");
  scanf("%d", &j);
  switch (j)
  {
  case 1:
    char ch;
    fp = fopen(file, "r");
    printf("Content of %s:\n", file);
    while ((ch = fgetc(fp)) != EOF)
    {
      printf("%c", ch);
    }
    fclose(fp);
    break;
  case 2:
    fp = fopen(file, "w");
    char c, chr[] = "From the small beginnings KIIT has developed into a leading university";
    fputs(chr, fp);
    fclose(fp);
    fp = fopen(file, "r");
    printf("Content of %s:\n", file);
    while ((c = fgetc(fp)) != EOF)
    {
      printf("%c", c);
    }
    fclose(fp);
    break;
  case 3:
    fp = fopen(file, "a");
    char chr1[] = " with a strong interdisciplinary culture and a commitment to teaching excellence";
    fputs(chr1, fp);
    fclose(fp);
    fp = fopen(file, "r");
    printf("Content of %s:\n", file);
    while ((c = fgetc(fp)) != EOF)
    {
      printf("%c", c);
    }
    fclose(fp);
    break;
  case 4:
    int a = 0;
    fp = fopen(file, "r");
    while ((ch = fgetc(fp)) != EOF)
    {
      a++;
    }
    printf("Number of characters in %s: %d", file, a);
    fclose(fp);
    break;
  case 5:
    fp = fopen(file, "r");
    a = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
      if (ch == ' ')
      {
        a++;
      }
    }
    if (a > 0)
    {
      a++;
    }
    printf("Number of words in %s: %d", file, a);
    fclose(fp);
    break;
  case 6:
    fp = fopen(file, "r");
    char ch1, str[1000];
    int k = 0;
    while ((ch1 = fgetc(fp)) != EOF)
    {
      str[k++] = toupper(ch1);
    }
    fclose(fp);
    fp = fopen(file, "w");
    fputs(str, fp);
    fclose(fp);
    fp = fopen(file, "r");
    printf("Content of %s:\n", file);
    while ((ch1 = fgetc(fp)) != EOF)
    {
      printf("%c", ch1);
    }
    fclose(fp);
    break;
  case 7:
    FILE *fp1 = fopen(file, "r");
    FILE *fp2 = fopen("./.tmp/new.txt", "w");
    char ch2;
    if (fp1 == NULL || fp2 == NULL)
    {
      printf("Error Opening File.");
      exit(0);
    }
    while ((ch2 = fgetc(fp1)) != EOF)
    {
      fputc(ch2, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2 = fopen("./.tmp/new.txt", "r");
    printf("Contents of new.txt:\n");
    while ((ch2 = fgetc(fp1)) != EOF)
    {
      printf("%c", ch2);
    }
    fclose(fp2);
    break;
  default:
    printf("Invalid Choice.");
    break;
  }
  return 0;
}