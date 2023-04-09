#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: The number to check
 * Return: 1 (sucess)
 * On error, 0 is returned
 */

int _isdigit(int c)
{
	int i;

	i = isdigit(c);
	if (i > 0)
		i = 1;
	else
		i = 0;
	return (i);
}
