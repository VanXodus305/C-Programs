#include <stdio.h>
int main(void)
{
	float a, b;
	printf("Enter the radius of the circle: ");
	scanf("%f", &a);
	b = 3.14 * a * a;
	printf("\nThe area of the circle = %f\n", b);
	return 0;
}
