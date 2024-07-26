#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  int s, l, k = 1;
  printf("Enter a string: ");
  scanf("%[^\n]s", &text);
  printf("Enter the starting position and length of substring: ");
  scanf("%d %d", &s, &l);
  if (s >= strlen(text))
  {
    printf("Invalid starting position.");
  }
  else
  {
    printf("Substring: ");
    for (int i = 0; i < strlen(text); i++)
    {
      if (i >= s && k <= l)
      {
        printf("%c", text[i]);
        k++;
      }
    }
  }
  return 0;
}