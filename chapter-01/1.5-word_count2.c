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
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		else if (c == ' ')
			putchar('\n');
	}
	return(0);
}
