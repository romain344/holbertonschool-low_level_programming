#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print lowercase
 *
 * Description:
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		write(1, &a, 1);
	}

}
