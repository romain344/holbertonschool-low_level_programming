#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le nom du propriétaire du chien
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
