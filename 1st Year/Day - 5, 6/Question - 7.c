#include <stdio.h>
int main()
{
  float a, b;
  char ch;
  printf("Enter 2 numbers and your choice as per the menu:\n");
  printf("A for Addition\nS for Subraction\nM for Multiplication\nD for Division\n");
  scanf("%f %f %c", &a, &b, &ch);
  switch (ch)
  {
  case 'A':
    printf("The sum of the numbers is = %f\n", a + b);
    break;
  case 'S':
    printf("The difference of the numbers is = %f\n", a - b);
    break;
  case 'M':
    printf("The product of the numbers is = %f\n", a * b);
    break;
  case 'D':
    printf("The quotient of the numbers is = %f\n", a / b);
    break;
  default:
    printf("Invalid choice.\n");
    break;
  }
  return 0;
}
