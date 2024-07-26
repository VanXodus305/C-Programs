#include <stdio.h>
int main()
{
	printf("Even series within 50:\n");
	for (int i = 1; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
