#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @a: The number for which the factorial is to be calculated.
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int a)
{
	if (a < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

