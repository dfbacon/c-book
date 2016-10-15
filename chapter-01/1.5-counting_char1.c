#include <stdio.h>

/**
 * main - counting characters
 * must press ctrl+d after input to generate EOF
 * Return: 0
 */

int main(void)
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
	{
		++nc;
	}
	printf("%ld\n", nc);
	return(0);
}
