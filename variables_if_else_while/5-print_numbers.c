#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print all the single unit from 0 to 10.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int b = 10;

	while (b <= 10)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
