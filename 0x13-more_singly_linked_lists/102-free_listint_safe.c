#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first element
 * Return: Always nothing.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	if (!h || *h)
		return (0);
	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
