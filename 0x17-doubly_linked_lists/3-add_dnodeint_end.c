#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer to add to new node
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
		new_node->next = NULL;
	}
	return (new_node);
}
