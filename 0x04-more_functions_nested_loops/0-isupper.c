#include "main.h"

/**
 * _isupper - function that checks uppercase alphas
 * @c: an integer
 * Return: something but success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
