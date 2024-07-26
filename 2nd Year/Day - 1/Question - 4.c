// Write a menu driven program to create a structure to represent complex number and perform the following operation using function:
// 1. Addition of two complex number (call by value)
// 2. Multiplication of two complex number

#include <stdio.h>

struct Complex
{
  float real;
  float imaginary;
};

void sum(struct Complex c1, struct Complex c2)
{
  printf("Sum: %0.2f + %0.2fi\n", c1.real + c2.real, c1.imaginary + c2.imaginary);
}

void product(struct Complex *c1, struct Complex *c2)
{
  printf("Product: %0.2f + %0.2fi\n", c1->real * c2->real - c1->imaginary * c2->imaginary, c1->real * c2->imaginary + c1->imaginary * c2->real);
}

void main()
{
  struct Complex c1, c2, c3;
  int choice;
  printf("Enter the real and imaginary part of the first complex number: ");
  scanf("%f %f", &c1.real, &c1.imaginary);
  printf("Enter the real and imaginary part of the second complex number: ");
  scanf("%f %f", &c2.real, &c2.imaginary);
  printf("Enter the operation you want to perform:\n1. Addition\n2. Multiplication\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    sum(c1, c2);
    break;
  case 2:
    product(&c1, &c2);
    break;
  default:
    printf("Invalid choice\n");
  }
}