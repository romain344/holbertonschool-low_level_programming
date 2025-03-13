#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'un chien
 * @d: pointeur vers une structure dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
