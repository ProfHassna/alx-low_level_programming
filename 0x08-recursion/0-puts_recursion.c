#include "main.h"

/**
 * _puts_recursion - function that prints a str followed by a new line
 * @s: string to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
