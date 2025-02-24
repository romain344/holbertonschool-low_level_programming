#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 *
 * Return: Always 0 (success)
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
