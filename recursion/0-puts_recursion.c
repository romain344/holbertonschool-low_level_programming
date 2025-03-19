#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @a: The string to print
 */

void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*a);
	_puts_recursion(a + 1);
}
