#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Return: Always 0 if there is no error.
 */

void print_alphabet_x10(void)
{
	int n, c;

	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}
