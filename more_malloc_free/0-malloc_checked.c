#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire avec malloc
 * @b: taille en octets de la mémoire à allouer
 *
 * Return: pointeur vers la mémoire allouée
 * Si l'allocation échoue, le programme se termine avec un statut 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

		if (ptr == NULL)
		{
			exit(98);
		}
	return (ptr);
}
