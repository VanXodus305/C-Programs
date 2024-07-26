#include <stdio.h>
int main()
{
	printf("Enter 10 numbers:\n");
	int sum = 0, num;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("The sum of the numbers = %d\n", sum);
	printf("The average of the numbers = %f\n", (float)sum / 10);
	return 0;
}
