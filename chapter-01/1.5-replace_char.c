#include <stdio.h>

/**
 * main - copy intput to output; make tabs, backspace and backslash unambiduous
 * Return: 0
 */

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
		}
		else if (c == '\b')
		{
			printf("\\b");
		}
		else if (c == '\\')
		{
			printf("\\");
		}
		else
		{
			putchar(c);
		}
	}
	return(0);
}
