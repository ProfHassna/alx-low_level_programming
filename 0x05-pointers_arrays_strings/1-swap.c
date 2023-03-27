#include "main.h"
#include <stdio.h>

/**
 *swap_int - a function that swaps the values of two integers
 *@a: int to swap
 *@b: int to swap
 * Return: nothings.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
