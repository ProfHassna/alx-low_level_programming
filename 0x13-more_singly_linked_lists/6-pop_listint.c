#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element
 * Return: the head node's data n (on success)
 * return 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = (*head)->n;

	temp = (*head)->next; 
	if (*head == NULL)
		return (0);
	free(head);
	*head = temp;

	return (n);
}
