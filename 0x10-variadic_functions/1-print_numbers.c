#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints nums
 * @n: number of int
 * @separator: string to use to separate nums
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == 0)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
		if ((i == (n - 1)))
			printf("%d", va_arg(ap, int));
		else
			printf("%d%c", va_arg(ap, int), separator);
	va_end(ap);
	printf("\n");
}
