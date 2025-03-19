#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @a: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(a + 1));
}
