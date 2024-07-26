#include <stdio.h>
int main()
{
  int a;
  printf("Enter the total marks secured by the student: \n");
  scanf("%d", &a);
  if (a >= 90 && a <= 100)
  {
    printf("Secured grade is O\n");
    return (0);
  }
  if (a >= 80 && a <= 89)
  {
    printf("Secured grade is E\n");
    return (0);
  }
  if (a >= 70 && a <= 79)
  {
    printf("Secured grade is A\n");
    return (0);
  }
  if (a >= 60 && a <= 69)
  {
    printf("Secured grade is B\n");
    return (0);
  }
  if (a >= 50 && a <= 59)
  {
    printf("Secured grade is C\n");
    return (0);
  }
  if (a >= 40 && a <= 49)
  {
    printf("Secured grade is D\n");
    return (0);
  }
  else
  {
    printf("Secured grade is F\n");
  }
  return 0;
}