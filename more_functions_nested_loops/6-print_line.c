#include "main.h"

/**
 * print_line - write function ytah 
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
