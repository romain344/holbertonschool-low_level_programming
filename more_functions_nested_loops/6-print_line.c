#include "main.h"

/**
 * print_line - write function ytah 
 */
void print_line(int a)
{
	
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < a; i++)
		{		
			_putchar('_');
		}
		_putchar('\n');
	}
}
