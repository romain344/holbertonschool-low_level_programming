#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales d'une matrice carrée
 * @a: La matrice d'entiers.
 * @size: La taille de la matrice carrée (nombre de lignes ou de colonnes).
 */
void print_diagsums(int *a, int size)
{
	int somme1 = 0, somme2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		somme1 += a[i * size + i];
		somme2 += a[i * size + (size - 1 - i)];
	}

		printf("%d, %d\n", somme1, somme2);
}
