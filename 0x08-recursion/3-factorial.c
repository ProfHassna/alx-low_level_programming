#include "main.h"

/**
 * factorial - Returns factoriel of a n
 * @n: num
 *
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		if (n <= 0)
			return (-1);
		else
			return (n * factorial(n - 1));
}
