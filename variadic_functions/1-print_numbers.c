#include "variadic_functions.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - Affiche des nombres séparés par un séparateur
 * @separator: Le séparateur entre les nombres
 * @n: Le nombre total d'arguments à afficher
 *
 * Description:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
