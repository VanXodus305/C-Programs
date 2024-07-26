#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d;
	float r1, r2;
	printf("Enter the values of a, b, c in the quadratic equation:\n");
	scanf("%f %f %f", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	if (d >= 0)
	{
		r1 = ((b * -1) + sqrt(d)) / (2 * a);
		r2 = ((b * -1) - sqrt(d)) / (2 * a);
		printf("The roots of the equation are: %f,\t%f\n", r1, r2);
	}
	else
	{
		printf("The equation has no real roots.\n");
	}
	return 0;
}
