#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is less than or equal to 0, the function will print
 *              only a newline. Otherwise, it prints a diagonal line
 *              with spaces before '\' to create the diagonal.
 */
void print_diagonal(int n)
{
	int b, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (c = 0; c < b; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
