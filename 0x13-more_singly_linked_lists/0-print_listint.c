#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first element
 * Return: the number of nodes (on success)
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
