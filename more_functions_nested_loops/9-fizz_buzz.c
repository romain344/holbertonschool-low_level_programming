#include <stdio.h>

/**
 * main -
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{

		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", a);
		}

		if (a != 100)
		{
			printf(" ")
		}
		else
		{
			printf("\n")
		}
	}
	return (0);
}
