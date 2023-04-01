#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	int i;

	i = n;
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10 !=0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}

