#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 * Return: 1 (sucess)
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	int i;

	i = isalpha(c);
	if (i > 0)
		i = 1;
	else
		i = 0;
	return (i);
}
