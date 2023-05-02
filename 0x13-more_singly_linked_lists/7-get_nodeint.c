#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint linked list
 * @head: pointer to the first element
 * @index: the index of the node, starting at 0
 * Return: the nth node (on success)
 * return NULL if the node doesn't exsit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
			break;
		}
		i++;
		head = head->next;
	}

	return (0);
}
