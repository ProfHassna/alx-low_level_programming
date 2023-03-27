#include "main.h"
#include <stdio.h>

/**
 * re_stringv - a function that reverses a string
 * @s: param to reverse
 * Return: nothings.
 */

void rev_string(char *s)
{
	int i, j;
	char str = s[0];

	j = 0;
	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		str = s[i];
		s[i] = s[j];
		s[j] = str;
	}
}
