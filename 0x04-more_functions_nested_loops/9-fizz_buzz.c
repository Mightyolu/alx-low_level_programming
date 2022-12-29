#include <stdio.h>

/**
 *  main - prints Buzz each numbers of 3 and 5
 *   Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		printf("FizzBuzz ");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		else
		{
			printf("%d ", n);
		}
	}
	printf("Buzz\n");
	return (0);
}
