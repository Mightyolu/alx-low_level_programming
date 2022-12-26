#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number of the sign to be printed
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number is less that zero
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
