#include "main.h"

/**
* _isalpha - Checks if a character is a letter of the alphabet.
* @c: The character to check.
*
* Description:
* This function checks if the given character is an uppercase letter
* (from 'A' to 'Z') or a lowercase letter (from 'a' to 'z').
*
* Return:
* 1 if the character is a letter, otherwise 0.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
return (0);
}
