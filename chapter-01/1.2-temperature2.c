#include <stdio.h>

/**
 * main - print temperature conversion chart using float
 * Return: 0
 */

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		/**
		 * printf format: %3.0f = print 1st # of each line in a field
		 * 3-digits wide, with 0 numbers listed beyond the decimal.
		 * %6.1f = " " 6-digits wide, with 1 number listed beyond the
		 * decimal.
		 */
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
