#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character.
 *
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
