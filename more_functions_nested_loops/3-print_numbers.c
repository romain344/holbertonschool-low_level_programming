#include "main.h"

/**
 * print_numbers - prints the numbers form 0;9
 */
void print_numbers(void)
{
	for (char panzer = '0'; panzer <= '9'; panzer++)
	{
		-putchar(panzer);
	}
	_putchar('\n');
}
