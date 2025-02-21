#include "main.h"

/**
 * print_alphabet - function that print x10 alphabet in lowercase
 *
 * description:
 */

void print_alphabet_x10(void);
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putachar (a);
		}

		_putchar('\n');
	}
}
