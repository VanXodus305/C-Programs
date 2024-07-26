#include <stdio.h>
int main()
{
	int a, f = 0;
	printf("Enter a number: ");
	scanf("%d", &a);
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			f += i;
		}
	}
	if (f == a)
	{
		printf("The number is a Perfect Number.\n");
	}
	else
	{
		printf("The number is not a Perfect Number.\n");
	}
	return 0;
}
