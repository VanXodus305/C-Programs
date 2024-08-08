#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  char *ptr = text;
  printf("Enter a string: ");
  scanf("%[^\n]s", ptr);
  if ((strlen(ptr) % 2) != 0)
  {
    printf("The length of the string must be even.");
  }
  else
  {
    for (int i = 0; i < strlen(ptr); i = i + 2)
    {
      char ch = *(ptr + i);
      *(ptr + i) = *(ptr + i + 1);
      *(ptr + i + 1) = ch;
    }
    printf("Modified String: %s\n", ptr);
  }
  return 0;
}