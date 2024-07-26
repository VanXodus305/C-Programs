#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int v = 0, c = 0, n = 1, ch = 0, w = 0;
  printf("Enter a string: ");
  gets(text);
  for (int i = 0; i <= strlen(text); i++)
  {
    if (text[i] == ' ' || text[i] == '\0')
    {
      w++;
    }
    if (text[i] == '\n')
    {
      n++;
    }
    if (toupper(text[i]) == 'A' || toupper(text[i]) == 'E' || toupper(text[i]) == 'I' || toupper(text[i]) == 'O' || toupper(text[i]) == 'U')
    {
      v++;
    }
    else
    {
      c++;
    }
    ch++;
  }
  printf("Vowels: %d\nConsonants: %d\nNew Lines: %d\nCharacters: %d\nWords: %d", v, c, n, ch, w);
  return 0;
}