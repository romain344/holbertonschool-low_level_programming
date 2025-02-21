#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 *Description: This function prints the lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
