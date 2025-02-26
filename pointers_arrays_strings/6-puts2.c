#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: the string whose characters we want to print
 *
 * Description: This function prints every other character of a string
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{

		if (a % 2 == 0)
		{
			putchar(str[a]);


		}
		a++;
	}
	putchar('\n');
}
