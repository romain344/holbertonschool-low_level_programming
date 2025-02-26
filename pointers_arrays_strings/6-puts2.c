#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str:
 *
 * Description:
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\');
	{

		if (a % 2 == 0)
		{
			putchar(str[a]);


		}
		a++;
	}
	putchar('\n');
}
