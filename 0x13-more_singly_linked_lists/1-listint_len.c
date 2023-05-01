#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first element
 * Return: the number of elements (on success)
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
