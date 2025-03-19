#include "main.h"

/**
 * _isupper - Function that checks if a character is uppercase
 * @c: character is checks
 *
 * Return: 1 if it is a capital letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
