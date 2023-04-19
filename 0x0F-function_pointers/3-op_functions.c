#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - adds two int
 * @a: num 1
 * @b: num 2
 *
 * Return: result (on success)
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - difference of two int
 * @a: num 1
 * @b: num 2
 *
 * Return: result (on success)
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}


/**
 * op_mul - multiplies two int
 * @a: num 1
 * @b: num 2
 *
 * Return: result (on success)
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}


/**
 * op_div - division of two int
 * @a: num 1
 * @b: num 2
 *
 * Return: result (on success)
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}


/**
 * op_mod - difference of two int
 * @a: num 1
 * @b: num 2
 *
 * Return: result (on success)
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
