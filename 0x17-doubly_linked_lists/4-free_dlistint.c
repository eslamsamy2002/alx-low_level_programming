#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node != NULL)
	{
		node = node->next;
		free(head);
		head = node;
	}
}
