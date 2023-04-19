#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - selects the correct func to perform
 * @s: the operator
 *
 * Return: A pointer to the func.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
	}
	return (0);

}
