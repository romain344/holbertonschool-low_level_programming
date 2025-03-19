#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @a: the number of times the character '_' should be printe
 *
 * Description: If @a is less than or equal to 0, only a newline will be printe
 */
void print_line(int a)
{
	int i;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < a; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
