#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Natural numbers from %d to 1:\n", n);
	for (int i = n; i >= 1; i--)
	{
		printf("%d ", i);
	}
	return 0;
}
