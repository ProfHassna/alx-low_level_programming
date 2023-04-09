#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", res);
		return (0);
	}
	else
		printf("%s\n", "Error");
	return (1);
}
