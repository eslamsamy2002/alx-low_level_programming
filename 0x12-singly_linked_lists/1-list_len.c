#include "lists.h"

/**
 *list_len - return all number of elements
 *@h: pointer to the list_t list to print
 *
 *Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);

}
