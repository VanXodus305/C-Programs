#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int a = 0;
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  for (int i = 0; i < strlen(text); i++)
  {
    if (text[i] >= '0' && text[i] <= '9')
    {
      a = (a * 10) + (text[i] - '0');
    }
  }
  printf("Integer: %d", a);
  return 0;
}