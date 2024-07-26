// Write a program to read two numbers and compare the numbers using function call by address.

#include <stdio.h>

void compare(int *a, int *b)
{
  if (*a == *b)
  {
    printf("Both numbers are same.\n");
    return;
  }
  *a > *b ? printf("%d is greater than %d\n", *a, *b) : printf("%d is greater than %d\n", *b, *a);
}

void main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  compare(&a, &b);
}