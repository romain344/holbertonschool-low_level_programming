#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first character in the string s that matches any char
 * @a: The string to be searched.
 * @accept: The string containing the accepted characters.
 *
 * Return: A pointer to the first occurrence of a character from accept in s,
 *         or NULL if none is found.
 */
char *_strpbrk(char *a, char *accept)
{
	char *b;

	while (*a)
	{
		b = accept;
		while (*b)
		{
			if (*a == *b)
			return (a);
			b++;
		}
		a++;
	}

	return (NULL);
}
