#include <stdio.h>
#include <stdlib.h>
struct Complex
{
  float rl, im;
};
void add(struct Complex c1, struct Complex c2)
{
  printf("Sum of the Complex Numbers = %0.2f + %0.2fi", (c1.rl + c2.rl), (c1.im + c2.im));
}
void subtract(struct Complex c1, struct Complex c2)
{
  printf("Difference of the Complex Numbers = %0.2f + %0.2fi", (c1.rl - c2.rl), (c1.im - c2.im));
}
void multiply(struct Complex c1, struct Complex c2)
{
  printf("Product of the Complex Numbers = %0.2f + %0.2fi", ((c1.rl * c2.rl) - (c1.im * c2.im)), (c1.rl * c2.im) + (c1.im * c2.rl));
}
void divide(struct Complex c1, struct Complex c2)
{
  printf("Quotient of the Complex Numbers = %0.2f + %0.2fi", (((c1.rl * c2.rl) + (c1.im * c2.im)) / ((c2.rl * c2.rl) + (c2.im * c2.im))), (((c1.im * c2.rl) - (c1.rl * c2.im)) / ((c2.rl * c2.rl) + (c2.im * c2.im))));
}
int main()
{
  struct Complex com[2];
  for (int i = 0; i < 2; i++)
  {
    printf("\nEnter Complex Number - %d:\n", i + 1);
    printf("Real Unit: ");
    scanf("%f", &com[i].rl);
    printf("Imaginary Unit: ");
    scanf("%f", &com[i].im);
  }
  char ch;
  printf("\nEnter A for Addition\nEnter S for Subtraction\nEnter M for Multiplication\nEnter D for Division\nEnter E to Exit\nEnter your choice: ");
  scanf(" %c", &ch);
  switch (ch)
  {
  case 'A':
    add(com[0], com[1]);
    break;
  case 'S':
    subtract(com[0], com[1]);
    break;
  case 'M':
    multiply(com[0], com[1]);
    break;
  case 'D':
    divide(com[0], com[1]);
    break;
  case 'E':
    exit(0);
  default:
    printf("Invalid Choice.");
  }
  return 0;
}