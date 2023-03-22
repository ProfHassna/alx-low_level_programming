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

	if (n < 0)
	n = n * -1;
	i = n % 10;
	_putchar('0' + i);
	return (i);
}
