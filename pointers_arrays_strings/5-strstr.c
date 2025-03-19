#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of the substring needle in the string
 * @haystack: The string to be searched.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*a && *b && (*a == *b))
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
