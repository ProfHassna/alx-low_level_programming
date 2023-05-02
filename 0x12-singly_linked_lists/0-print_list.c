#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a listint_t list
 * @h: pointer to the first element
 * Return: the number of nodes (on success)
 */

size_t print_list(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		       printf("%d%s\n", 0, "(nil)");
		else
			printf("%d%s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
