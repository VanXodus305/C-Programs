#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("\nEnter the second integer: ");
	scanf("%d", &b);
	printf("\nBefore swapping: \n");
	printf("First integer: %d\tSecond integer: %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swapping: \n");
	printf("First integer: %d\tSecond integer: %d", a, b);
	return 0;
}
