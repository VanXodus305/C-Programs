#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{

  int c = 0, d = 0, j, i;
  char ch, str[2000], *words[500], file[100];
  printf("Enter the location of the file: ");
  scanf("%[^\n]s", file);
  FILE *fp = fopen(file, "r");
  if (fp == NULL)
  {
    printf("Error Opening File");
    exit(0);
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    str[c++] = ch;
  }
  fclose(fp);
  char *token = strtok(str, " ");
  while (token != NULL)
  {
    words[d++] = token;
    token = strtok(NULL, " ");
  }
  for (i = 0; i < d; i++)
  {
    for (j = 0; j < strlen(words[i]); j++)
    {
      if ((j == 2 || j == 5) && (words[i][j] != '-'))
      {
        break;
      }
      else if ((j != 2 && j != 5) && (words[i][j] < '0' || words[i][j] > '9'))
      {
        break;
      }
    }
    if (j == strlen(words[i]))
    {
      printf("Date exists in the file.");
      break;
    }
  }
  if (i == d)
  {
    printf("Date does not exist in file.");
  }
  return 0;
}