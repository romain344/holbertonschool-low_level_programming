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
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}

	dog->age = age;

	return (dog);
}
