#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int v = 0, c = 0;
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  char *p = text;
  for (int i = 0; i < strlen(p); i++)
  {
    char a = toupper(*(p + i));
    if (a >= 65 && a <= 90)
    {
      if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
      {
        v++;
      }
      else
      {
        c++;
      }
    }
  }
  printf("The number of vowels in the sentence = %d\n", v);
  printf("The number of consonants in the sentence = %d", c);
}