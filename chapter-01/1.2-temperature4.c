#include <stdio.h>

/**
 * main - temp conversion chart ex1-4
 * Return: 0
 */

int main(void)
{
	float fahr, celsius;
	int upper, lower, step;

        lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	printf("%3s %6s\n", "Celsius", "Fahr");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%6.1f %6.0f\n", celsius, fahr);
		fahr = fahr + step;
	}
}
