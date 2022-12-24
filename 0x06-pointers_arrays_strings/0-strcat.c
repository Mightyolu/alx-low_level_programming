#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: Destination
 * @src: Source
 * Return: The pointer to dest
 */

char *_strncat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		break;
		count++;
		count2++;
	}
	return (dest);
}
