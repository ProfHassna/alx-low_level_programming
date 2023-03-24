#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - checks for uppercase character
 * @c: The character to check
 * Return: 1 (sucess)
 * On error, 0 is returned
 */

int _isupper(int c)
{
	int i;

	i = isupper(c);
	if (i > 0)
		i = 1;
	else
		i = 0;
	return (i);
}
