#include <stdio.h>
int main()
{
	char a;
	printf("Enter an alphabet: \n");
	scanf("%c", &a);
	if (a >= 97 && a <= 122)
	{
		a = a - 32;
		printf("Uppercase: %c\n", a);
	}
	else if (a >= 65 && a <= 90)
	{
		printf("The alphabet is already in uppercase.\n");
	}
	else
	{
		printf("Entered character is not an alphabet.\n");
	}
	return 0;
}
