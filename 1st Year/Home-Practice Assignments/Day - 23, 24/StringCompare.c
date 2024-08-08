#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text1[100], text2[100], v = 0;
  printf("Enter the first string: ");
  gets(text1);
  printf("Enter the second string: ");
  gets(text2);
  for (int i = 0; i < (strlen(text1) > strlen(text2) ? strlen(text1) : strlen(text2)); i++)
  {
    if (text1[i] == text2[i])
    {
      continue;
    }
    else
    {
      v = text1[i] - text2[i];
    }
  }
  printf("Difference between the 2 strings: %d", v);
}