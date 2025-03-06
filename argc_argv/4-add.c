#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 if successful, 1 if there are errors.
 */
int main(int argc, char *argv[])
{
		int sum = 0
		int i;
		int j;

		if (argc == 1)
		{
		printf("0\n");
			return (0);
		}	
			for (i = 1; i < argc; i++)
			{				

				for (j = 0; argv[i][j] != '\0'; j++)
				{					
					if (!isdigit(argv[i][j]))
					{	
					printf("error\n");
						return (1);
					}	
				}	

				sum += atoi(argv[i]);
			}	

			printf("%d\n", sum);

			return (0);
}
