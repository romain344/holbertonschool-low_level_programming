#include "main.h"

/**
 * print_numbers - prints the numbers form 0;9
 */
void print_numbers(void)
{
	char panzer;

	for (panzer = '0'; panzer <= '9'; panzer++)
	{
		-putchar(panzer);
	}
	_putchar('\n');
}
