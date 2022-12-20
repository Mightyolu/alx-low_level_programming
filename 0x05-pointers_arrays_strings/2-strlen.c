#include "main.h"
/**
 * _strlen-Finds the length of a string.
 * @s:String pointert to the string whose length: returns the length of the string.
 */
int_strlen(char *s)
{
	int p = 0;
	/*incremeant up to when the last character is NULL, \0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

