#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog != NULL)
    {
        printf("My dog's name is %s, age is %.2f, and owner is %s\n", my_dog->name, my_dog->age, my_dog->owner);
        
        free(my_dog->name);
        free(my_dog->owner);
        
        free(my_dog);
    }
    else
    {
        printf("Failed to create a new dog.\n");
    }
    return 0;
}
