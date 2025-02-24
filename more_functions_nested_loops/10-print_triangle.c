#include "main.h"

/**
 * print_triangle - Function to execute in the program
 * @size: Integrer to use
 *
 * Description: Function to print a triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	
	for (int a = 1; a <= size; a++)
	{
		for (int b = 1; b <= size; - a; b++)
		{
			printf((" ");
		}

		for (b = 1; b <= a; a++)
		{
			printf("#");
		}

		printf(("\n");
	}
}
