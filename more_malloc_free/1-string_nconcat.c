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
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);

	len_s2 = strlen(s2);
	if (n >= len_s2)
		n = len_s2;

	result = calloc(len_s1 + n + 1, sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		result[len_s1 + j] = s2[j];

	return (result);
}
