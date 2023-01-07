 #include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * Fill the first n byte of the memory area pointed to by s with the constant b
 * @s: Pointer to memory area
 * @b: Constant to fill memory with
 * @n: Bytes of the memory area to be filled
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
