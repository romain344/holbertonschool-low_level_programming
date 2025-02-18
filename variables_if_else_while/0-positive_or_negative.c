#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Descriptiont: Assingns a random nuber to n and prints whether 
 * it is positive, negative, or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));		/* Initialisation du générateur de nombres aléatoires */
	n = rand();			/* Générer un nombre aléatoire */

	printf("%d ", n);	/* Afficher le nombre généré */

	if (n > 0)
	{
		printf("is positive\n");	/* Si le nombre est positif */
	}
	else if (n == 0)
	{
		printf("is zero\n");		/* Si le nombre est égal à 0 */
	}
	else
	{
		printf("is negative\n");	/* Si le nombre est négatif */
	}

	return (0);		/* Retourner 0 pour indiquer le succès */
}
