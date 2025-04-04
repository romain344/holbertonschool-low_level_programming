#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src, including the null byte
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
