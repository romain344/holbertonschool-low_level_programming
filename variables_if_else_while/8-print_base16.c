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
	int a = 0;

	while (a < 16)
	{
		if (a < 10)
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
