#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - checks if a string contains only digits
* @str: the string to check
*
* Return: 1 if it' s a valid number, 0 otherwise#include <stdio.h>
*/
int is_number(char *str)
{
	int i = 0;

	if (str[i] =='\0')
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}


/**
* main - add positive numbers passed as arguments
* @argc: the number of arguments
* @argv: array containig the arguments as strings
*
* Return: 0 (success), 1 (error if an argument is not number)
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
