#include "main.h"

/**
* print_sing - print print the of a number
* @n: the number in check
*
* Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}    
