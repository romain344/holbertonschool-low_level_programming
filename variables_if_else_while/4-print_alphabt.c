#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: written that prints in lowercase and in uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a = 'a';

		while (a <= 'z')
		{
			if (a == 'e' || a == 'q')
			{
				a++;
				continue;
			}
			else
			{
				putchar(a);
				a++;
			}
		}

	putchar('\n');
	return (0);
}
