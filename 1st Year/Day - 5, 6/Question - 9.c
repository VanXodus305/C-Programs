#include <stdio.h>
int main()
{
  int a;
  printf("Enter the total marks secured by the student: \n");
  scanf("%d", &a);
  if (a >= 90 && a <= 100)
  {
    printf("Secured grade is O\n");
  }
  else if (a >= 80 && a <= 89)
  {
    printf("Secured grade is E\n");
  }
  else if (a >= 70 && a <= 79)
  {
    printf("Secured grade is A\n");
  }
  else if (a >= 60 && a <= 69)
  {
    printf("Secured grade is B\n");
  }
  else if (a >= 50 && a <= 59)
  {
    printf("Secured grade is C\n");
  }
  else if (a >= 40 && a <= 49)
  {
    printf("Secured grade is D\n");
  }
  else
  {
    printf("Secured grade is F\n");
  }
  return 0;
}