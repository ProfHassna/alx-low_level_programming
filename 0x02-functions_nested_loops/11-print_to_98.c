#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints nums from n to 98
 * @n: number
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; ++i)
		{
			_putchar('0' + i);
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	else
		if (n > 98)
		for (i = n; i >= 98; --i)
                {
                        _putchar('0' + i);
                        if (i != 98)
                        {
                        _putchar(',');
                        _putchar(' ');
                        }
                }
		else
			_putchar('0' + n);
}
