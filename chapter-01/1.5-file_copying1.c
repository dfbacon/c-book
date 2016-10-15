#include <stdio.h>

/**
 * main - copy input to output 1 char at a time
 * Return: 0
 */

int main(void)
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
