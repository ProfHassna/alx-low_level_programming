#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to return the last digit of
 * Return: value of the last digit (Sucess)
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i  = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
