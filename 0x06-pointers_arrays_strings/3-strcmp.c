#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compares two strings.
 * @*s1: string to compare
 * @*s2: string to compare
 * Return: returns an integer indicating the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);;
	return (result);
}
