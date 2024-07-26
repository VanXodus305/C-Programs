#include <stdio.h>
#include <string.h>
int main()
{
  char text1[100];
  char text2[100];
  printf("Enter the first string: ");
  gets(text1);
  printf("Enter the second string: ");
  gets(text2);
  char text3[100];
  int c = 0;
  for (int i = 0; i < strlen(text1); i++)
  {
    text3[c] = text1[i];
    c++;
  }
  for (int i = 0; i < strlen(text2); i++)
  {
    text3[c] = text2[i];
    c++;
  }
  printf("Concatenated String: %s", text3);
  return 0;
}