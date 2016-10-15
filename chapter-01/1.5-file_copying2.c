#include <stdio.h>

/**
 * main - copy intput to out put 1 char at a time condensed
 * Return: 0
 */

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}
