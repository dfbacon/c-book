#include <stdio.h>

/**
 * main - print input one word per line
 *
 * Return: 0
 */

#define IN 1
#define OUT 0

int main(void)
{
	int c, n;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		while ((n = getchar()) != '\n')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return(0);
}
