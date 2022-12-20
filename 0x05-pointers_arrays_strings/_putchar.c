#include <unistd>
/**
 * -putchar - writes the character c to the stdout
 *  @c: the character to print 
 *  Return: on success 1
 *  On error, -1 is returned, and error is set appriopraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
			
