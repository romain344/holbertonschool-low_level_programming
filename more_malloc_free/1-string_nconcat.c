#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated space in memory
 *         followed by the first n bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);
	
	for (i = 0; i < len1; i++)
		result[i] = s1 [i];
	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result [len1 + i] = s2 [i];

	return (result);
}
