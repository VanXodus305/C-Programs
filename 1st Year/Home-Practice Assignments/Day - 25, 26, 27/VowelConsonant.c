#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char text[100];
  char *ptr = text;
  printf("Enter a string: ");
  scanf("%[^\n]s", ptr);
  printf("Frequency of Consonants:\n");
  for (int i = 0; i < strlen(ptr); i++)
  {
    int v = 1;
    int ch = toupper(*(ptr + i));
    if (ch >= 65 && ch <= 90 && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
    {
      if (strchr(ptr, *(ptr + i)) != (ptr + i))
      {
        continue;
      }
      for (int j = 0; j < strlen(ptr); j++)
      {
        if ((i != j) && (toupper(*(ptr + i)) == toupper(*(ptr + j))))
        {
          v++;
        }
      }
      printf("%c: %d\n", *(ptr + i), v);
    }
  }
  printf("Frequency of Vowels:\n");
  for (int i = 0; i < strlen(ptr); i++)
  {
    int v = 1;
    int ch = toupper(*(ptr + i));
    if ((ch >= 65 && ch <= 90) && (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    {
      if (strchr(ptr, *(ptr + i)) != (ptr + i))
      {
        continue;
      }
      for (int j = 0; j < strlen(ptr); j++)
      {
        if ((i != j) && (toupper(*(ptr + i)) == toupper(*(ptr + j))))
        {
          v++;
        }
      }
      printf("%c: %d\n", *(ptr + i), v);
    }
  }
  return 0;
}