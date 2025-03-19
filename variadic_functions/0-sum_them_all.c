#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Renvoie la somme de tous ses paramètres
 * @n: Le nombre d'arguments
 *
 * Return: La somme des arguments, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args,n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}