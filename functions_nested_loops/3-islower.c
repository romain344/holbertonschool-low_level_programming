#include "main.h"
#include <ctype.h>

/**
 * _islwoer - check for lowercase in the character
 *
 * Description:
 *
 * Return: Always 1 if the if is true 0 if the if is false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
