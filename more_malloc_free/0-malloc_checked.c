#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: The number of bytes to allocate.
*
* Return: A pointer to the allocated memory.
* If malloc fails, the function causes normal process termination with 98.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b)
	if(ptr == NUll)
		exit(98);
	return (ptr)
}
