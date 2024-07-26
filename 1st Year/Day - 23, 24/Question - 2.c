#include <stdio.h>
#include <string.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Last characters from every word:\n");
  for (int i = 0; i <= strlen(text); i++)
  {
    if (text[i] == ' ' || text[i] == '\0')
    {
      printf("%c", text[i - 1]);
    }
  }
  return 0;
}