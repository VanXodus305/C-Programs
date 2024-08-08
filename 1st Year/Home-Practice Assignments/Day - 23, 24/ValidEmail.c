#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int a, b = 0;
  printf("Enter a string:\n");
  scanf("%[^\n]s", &text);
  for (int i = 0; i <= strlen(text); i++)
  {
    if (text[i] == '@')
    {
      a++;
    }
    if (text[i] == '.')
    {
      b++;
    }
  }
  if (a != 0 && b != 0)
  {
    printf("It is a valid Mail ID");
  }
  else
  {
    printf("It is not a valid Mail ID");
  }
  return 0;
}