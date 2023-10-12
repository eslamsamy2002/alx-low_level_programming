#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node = (dlistint_t *)h;
	int n = 0;

	while (node != NULL)
	{
		node = node->next;
		n++;
	}
	return (n);
}
