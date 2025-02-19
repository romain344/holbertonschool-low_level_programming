#include <stdio.h>

/**
 * main - Entry point fo the program
 *
 * Description: written in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
