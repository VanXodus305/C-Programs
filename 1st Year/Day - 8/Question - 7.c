#include <stdio.h>
int main()
{
	int fact = 1, sum = 0, n, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;
	while (temp > 0)
	{
		for (int i = 1; i <= (temp % 10); i++)
		{
			fact = fact * i;
		}
		sum += fact;
		fact = 1;
		temp = temp / 10;
	}

	if (sum == n)
	{
		printf("It is a Strong Number.\n");
	}
	else
	{
		printf("It is not a Strong Number.\n");
	}
	return 0;
}
