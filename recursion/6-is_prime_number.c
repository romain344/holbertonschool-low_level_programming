#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be tested.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if a number is prime.
 * @n: The number to be tested.
 * @i: The possible divisor, starts at 2.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
