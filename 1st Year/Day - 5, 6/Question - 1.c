#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	c = (a > b) ? a : (b > a) ? b
														: -1;
	if (c == -1)
	{
		printf("The numbers are equal.\n");
	}
	else
	{
		printf("The largest number is: %d\n", c);
	}
	return 0;
}
