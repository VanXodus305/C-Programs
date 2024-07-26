#include <stdio.h>
int main()
{
	char a;
	printf("Enter an alphabet: \n");
	scanf("%c", &a);
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		{
			printf("Entered alphabet is a vowel.\n");
		}
		else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
		{
			printf("Entered alphabet is a vowel.\n");
		}
		else
		{
			printf("Entered alphabet is a consonant.\n");
		}
	}
	else
	{
		printf("Entered character is not an alphabet.\n");
	}
	return 0;
}
