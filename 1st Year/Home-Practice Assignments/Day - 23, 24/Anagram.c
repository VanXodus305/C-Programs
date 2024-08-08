#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text1[100], text2[100];
  int i;
  printf("Enter the first string:\n");
  gets(text1);
  printf("Enter the second string:\n");
  gets(text2);
  if (strlen(text1) != strlen(text2))
  {
    printf("The two strings are not anagrams.");
  }
  else
  {
    for (i = 0; i < strlen(text1); i++)
    {
      if (strchr(text2, text1[i]) == NULL)
      {
        printf("The two strings are not anagrams.");
        break;
      }
    }
    if (i == strlen(text1))
    {
      printf("The two strings are anagrams.");
    }
  }
  return 0;
}