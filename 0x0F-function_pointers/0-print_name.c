#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointer to the function to use
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		(*f)(name);
}
