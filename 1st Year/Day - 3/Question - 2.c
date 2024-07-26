#include <stdio.h>
int main(void)
{
	float a, b;
	printf("Enter the temperature in Celcius: ");
	scanf("%f", &a);
	b = (((9 * a)) / 5) + 32;
	printf("\nThe temperature in Fahrenheit is = %f\n", b);
	return 0;
}
