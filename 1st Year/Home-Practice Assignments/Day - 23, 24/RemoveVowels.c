#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Modified String: ");
  for (int i = 0; i < strlen(text); i++)
  {
    char c = toupper(text[i]);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
      continue;
    }
    printf("%c", text[i]);
  }
  return 0;
}