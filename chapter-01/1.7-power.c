#include <stdio.h>

/**
 * power - calculate a digit raised to the power of a second digit
 * @base: base number
 * @n: power
 *
 * Return: answer
 */
int power(int base, int n)
{
	int i, p;
	for (i =0; i <= n; ++i)
		p = p * base;
	return (p);
}

/**
 * main - run the power function
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return (0);
}
