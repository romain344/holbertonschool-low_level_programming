#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
		printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
}

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int man(void) 
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
