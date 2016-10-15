#include <stdio.h>

/**
 * main - count blanks, tabs, and newlines
 * Return: 0
 */

int main(void)
{
	int bl, tb, nl;
	int c;

	bl = 0;
	tb = 0;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++bl;
		}
		if (c == '\t')
		{
			++tb;
		}
		if (c == '\n')
		{
			++nl;
		}
	}
	printf("The number of blanks is: %d\n", bl);
	printf("The number of tabs is: %d\n", tb);
	printf("The number of new lines is: %d\n", nl);
	return(0);
}
