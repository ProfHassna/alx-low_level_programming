#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add an elements to a listint_t list
 * @head: pointer to the first element
 * @n: int to add
 * Return: the address of the new element (on success)
 * return NULL on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
