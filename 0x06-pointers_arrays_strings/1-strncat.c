#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *  @dest: Destination
 *  @src: Source.
 *  @n: Amount of bytes usd from src
 *  Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
