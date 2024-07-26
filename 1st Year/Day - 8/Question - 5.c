#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	int gcd = 1, lcm = a * b;
	a > b ? (c = a) : (c = b);
	while (c > 0)
	{
		if (a % c == 0 && b % c == 0 && c > gcd)
		{
			gcd = c;
		}
		c--;
	}
	for (int i = 1; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0 && i < lcm)
		{
			lcm = i;
		}
	}
	printf("The GCD of the two numbers: %d\n", gcd);
	printf("The LCM of the two numbers: %d\n", lcm);
	return 0;
}
