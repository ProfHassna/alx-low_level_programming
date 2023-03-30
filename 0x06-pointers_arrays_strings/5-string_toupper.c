#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @str: string to uppercase
 * Return: the result.
 */

int isLowerCase(char c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
 
 
int toUpperCase(char c)
{
	return c - 32; 
}

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if(isLowerCase(*(str + i)))
		{
			*(str + i) = toUpperCase(*(str + i));
		}
		else
		{
			*(str + i) = *(str + i);
		}
	}
	
	return (str);

}
