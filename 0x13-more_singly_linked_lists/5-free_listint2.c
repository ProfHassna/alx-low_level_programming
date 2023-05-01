#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first element
 * Return: Always nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h = *head;

	while (*head)
	{
		temp = h->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
