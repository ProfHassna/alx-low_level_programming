#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add an elements at index
 * @head: pointer to the first element
 * @idx: position where to add
 * @n: val of node
 * Return: the address of the new element (on success)
 * return NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp->next != NULL)
			temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
