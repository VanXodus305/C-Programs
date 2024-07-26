#include <stdio.h>
int main()
{
	int m, sum;
	printf("Enter a six digit number: \n");
	scanf("%d", &m);
	int f = m / 100000;
	int l = m % 10;
	printf("Sum of the first and last digits: %d\n", f + l);
	return 0;
}
