#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  int i = 0;
  for (i = 0; i < strlen(text); i++)
  {
    if (toupper(text[i]) == toupper(text[strlen(text) - 1 - i]))
    {
      continue;
    }
    else
    {
      printf("It is not a Palindrome String.");
      break;
    }
  }
  if (i == strlen(text))
  {
    printf("It is a Palindrome String.");
  }
  return 0;
}