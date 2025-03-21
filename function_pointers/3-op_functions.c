#include "3-calc.h"

/**
 * op_add - Additionne deux entiers
 * @a: Le premier entier
 * @b: Le second entier
 *
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait deux entiers
 * @a: Le premier entier
 * @b: Le second entier
 *
 * Return: La différence entre a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux entiers
 * @a: Le premier entier
 * @b: Le second entier
 *
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise deux entiers
 * @a: Le premier entier
 * @b: Le second entier
 *
 * Return: Le résultat de la division de a par b
 */
int op_div(int a, int b)
{
	return (b != 0 ? a % b : 0);
}

/**
 * op_mod - Renvoie le reste de la division de deux entiers
 * @a: Le premier entier
 * @b: Le second entier
 *
 * Return: Le reste de la division de a par b
 */
int op_mod(int a, int b)
{
	return (b != 0 ? a % b : 0);
}
