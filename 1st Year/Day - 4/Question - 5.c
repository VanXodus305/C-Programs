#include <stdio.h>
int main()
{
	float mp, bp, dis, p;
	float profit, loss;
	printf("Enter the buying price, marked price and discount: \n");
	scanf("%f %f %f", &bp, &mp, &dis);
	p = mp - ((dis / 100) * mp);
	p > bp ? (profit = (((p - bp) / bp) * 100)) : (loss = (((bp - p) / bp) * 100));
	profit >= 1 ? printf("The profit gained is: %f\n", profit) : printf("The loss incurred is: %f\n", loss);
	return 0;
}
