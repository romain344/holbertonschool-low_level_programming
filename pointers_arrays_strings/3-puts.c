#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @a: the string to be printed
 *
 * Description: Prints the string character by character followed by a newline
 */
void _puts(char *a)
{
	while (*a != '\0')
	{
		_putchar(*a);
		a++
	}
	_putchar('\n');
}
