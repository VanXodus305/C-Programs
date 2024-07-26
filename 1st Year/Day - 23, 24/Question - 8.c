#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Frequency of Characters:\n");
  for (int i = 0; i < strlen(text); i++)
  {
    int v = 1;
    if (text[i] != ' ' && text[i] != '\n')
    {
      if (strchr(text, text[i]) != &text[i])
      {
        continue;
      }
      for (int j = 0; j < strlen(text); j++)
      {
        if ((i != j) && (toupper(text[i]) == toupper(text[j])))
        {
          v++;
        }
      }
      printf("%c: %d\n", text[i], v);
    }
  }
  return 0;
}