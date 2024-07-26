#include <stdio.h>
int main()
{
	int a = 0, b = 1, c = 1;
	int d, m;
	printf("Enter the range of the series: ");
	scanf("%d", &m);
	printf("%d %d %d ", a, b, c);
	for (int i = 0; i < m - 3; i++)
	{
		d = a + b + c;
		printf("%d ", d);
		a = b;
		b = c;
		c = d;
	}
	return 0;
}
