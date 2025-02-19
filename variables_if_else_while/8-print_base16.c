#include <stdio.h>

/**
 * main - Entry point of the programe
 *
 * Description: number 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int b = 0;

	while (b < 16)
	{
		if (b < 10)
		{
			putchar (b + '0');
			a++;
		}
		else
		{
			putchar(b - 10 + 'a');
			a++;
		}
	}

	putchar('\n');
	return (0);
}
