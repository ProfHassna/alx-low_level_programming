#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: The number to print
 * Return: 1 (sucess) and prints + if n > 0
 * On error, 0 is returned if n = 0 and - if n <0
 */

int print_sign(int n)
{
	int i;

	i = n;
	if (i > 0)
	{
		_putchar('+');
		i = 1;
	}
	else
		if (i == 0)
		{
			_putchar('0');
			i = 0;
		}
		else
		{
			_putchar('-');
			i = -1;
		}
	return (i);
}
