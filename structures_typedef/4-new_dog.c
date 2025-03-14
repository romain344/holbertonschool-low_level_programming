#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée une nouvelle structure dog_t et alloue de la mémoire
 * pour les chaînes name et owner.
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: Un pointeur vers une nouvelle structure dog_t, ou NULL si
 * l'allocation échoue.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	int i, name_len = 0, owner_len = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_name = malloc(sizeof(char) * (name_len + 1));
	new_owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
