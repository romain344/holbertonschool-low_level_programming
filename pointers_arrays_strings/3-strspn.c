#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the accepted characters.
 *
 * Return: The number of bytes in the initial segment of `s`
 *         that consist only of bytes from `accept`.
 */
unsigned int _strspn(char *a, char *accept)
{
	unsigned int count = 0;
	char *b;

	while (*a)
	{
		b = accept;
		while (*b)
		{
			if (*a == *b)
			{
				count++;
				break;
			}
			b++;
		}
		if (*b == '\0')
		{
			break;
		}
		a++;
	}

	return (count);
}
