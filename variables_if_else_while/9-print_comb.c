#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}

	putchar('\n');
	return (0);
}
