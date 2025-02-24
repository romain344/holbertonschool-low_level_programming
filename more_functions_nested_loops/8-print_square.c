#include "main.h"

/**
 * print_square - Draws a square in the terminal
 * @size: The size of the square
 *
 * Description: If size is less than or equal to 0, only a newline is print
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
