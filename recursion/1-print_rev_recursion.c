#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @a: The string to print in reverse.
 */
void _print_rev_recursion(char *a)
{
	if (*a == '\0')
	{
		return;
	}

	_print_rev_recursion(a + 1);
	_putchar(*a);
}
