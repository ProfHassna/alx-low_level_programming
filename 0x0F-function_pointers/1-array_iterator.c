#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each elmt of an array
 * @array: an array
 * @size: size of the array
 * @action: pointer to teh function you need
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && size > 0 && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
