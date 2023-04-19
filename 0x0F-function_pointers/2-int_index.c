#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: the array to search in
 * @size: size of the array
 * @cmp: pointer to the func to be used to compare vals
 *
 * Return: indx of the fst elmt found (on success)
 * on failure return (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != 0 && size > 0 && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
