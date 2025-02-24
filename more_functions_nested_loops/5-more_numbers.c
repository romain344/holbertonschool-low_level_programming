#include "main.h"

/**
 * more_numbers - function that prints x10 the numbers form 0 to 14
 */
void more_numbers(void)
{
	char a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
