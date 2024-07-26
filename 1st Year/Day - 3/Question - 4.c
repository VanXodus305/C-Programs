#include <stdio.h>
int main(void)
{
	float a, b;
	printf("Enter the base of the triangle: ");
	scanf("%f", &a);
	printf("\nEnter the height of the triangle: ");
	scanf("%f", &b);
	printf("\nThe area of the triangle = %f\n", (0.5 * a * b));
	return 0;
}
 