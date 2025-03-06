#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
		return (0);
}
