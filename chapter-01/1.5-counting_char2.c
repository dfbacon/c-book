#include <stdio.h>

/**
 * main - count char in input with for loop
 * must press ctrl+c after input to generate EOF
 * Return: 0
 */

int main(void)
{
	double nc;

	for (nc =0; getchar() != EOF; ++nc)
	{
		;
	}
	printf("%.0f\n", nc);
	return(0);
}
