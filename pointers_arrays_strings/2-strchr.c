#include "main.h"
#include <stddef.h>

/**
 * _strchr - Searches for the first occurrence of character b in the string a.
 * @a: The string to be searched.
 * @b: The character to search for.
 *
 * Return: A pointer to the first occurrence of character b in string a,
 *         or NULL if b is not found. If b is the null character '\0',
 *         the function will return a pointer to the null terminator of the
 *         string.
 */
char *_strchr(char *a, char b)
{
	while (*a != '\0')
	{

		if (*a == b)
		{
			return (a);
		}
				a++;
	}
	if (b == '\0')
	{
		return (a);
	}
	return (NULL);
}
