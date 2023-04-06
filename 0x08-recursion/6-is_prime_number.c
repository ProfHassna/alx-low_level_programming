#include "main.h"

/**
 * modu - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int modu(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (modu(a, b + 1));
}

/**
 * is_prime_number - checks is n is a prime number
 * @n: num
 *
 * Return: On success 1.
 * Otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (modu(n, 2));
}

