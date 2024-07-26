#include <stdio.h>
int main()
{
	int m, km;
	printf("Enter the distamce in metres: \n");
	scanf("%d", &m);
	km = m / 1000;
	m = m - (km * 1000);
	printf("The distance is: %d kilometres and %d metres", km, m);
	return 0;
}
