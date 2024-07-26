#include <stdio.h>
int main()
{
	int s, m, h;
	printf("Enter the time in seconds: \n");
	scanf("%d", &s);
	h = s / 3600;
	m = (s - (h * 3600)) / 60;
	s = s - ((s / 60) * 60);
	printf("The time is: %d hours %d minutes and %d seconds\n", h, m, s);
	return 0;
}
