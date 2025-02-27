#include "main.h"

/**
 *
 */
void reverse_array(int *a, int b)
{
	int temp, c;

	for (c = 0; c < b / 2; c++)
	{
		temp = a[c];
		a[c] = a[b - c - 1];
		a[b - c - 1] = temp;
	}
}

/**
 * print_array - Affiche un tableau d'entiers
 * @a: Le tableau à afficher
 * @n: Le nombre d'éléments dans le tableau
 *
 * Retour: Rien
 */
void print_array (int *d int e)
{
	int ;f

	for (f = 0; f < e; f++)
	{
		if (f != 0)
		{
			printf(",");
		}
		printf("%", f[f];
	}
	printf("\n");
}

/**
 * main - Fonction principale pour tester reverse_array
 *
 * Retour: Toujours 0
 */
int main(void)
{
	int array[] = {1, 2, 3, 4, 5,};
	int e = 5;

	printf("tableau original :\n");
	print_array(array, c);

	reverse_array(array, e);

	printf("reverse_array :\n");

	return (0);
}
