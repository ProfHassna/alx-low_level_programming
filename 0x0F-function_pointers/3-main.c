#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Main program
 * @argc: count args
 * @argv: array of characters
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char *op;

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
		printf("Error\n"), exit(99);
	if (argc == 4)
	{
		op = argv[2];
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if ((*op == '%' || *op == '/') && b == 0)
			printf("Error\n");
		else
		{
			res = (*get_op_func(op))(a, b);
			printf("%d\n", res);
		}
	}
	else
		printf("Error\n");
	return (0);
}
