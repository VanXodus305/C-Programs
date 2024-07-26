#include <stdio.h>
int main()
{
	int a = 1, b = 3;
	int c, n;
	printf("Enter the range of the series: ");
	scanf("%d", &n);
	printf("%d %d ", a, b);
	for (int i = 0; i < n - 2; i++)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}
