#include <stdio.h>
int main()
{
	int a, f = 0;
	printf("Enter a number: ");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			f++;
		}
	}
	if (f == 2)
	{
		printf("The number is a Prime Number.\n");
	}
	else
	{
		printf("The number is not a Prime Number.\n");
	}
	return 0;
}
