#include <stdio.h>
int main()
{
	int a;
	printf("Enter the year: ");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400) == 0)
	{
		printf("Entered year is a leap year.\n");
	}
	else
	{
		printf("Entered year is not a leap year.\n");
	}
	return 0;
}
