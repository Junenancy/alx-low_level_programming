#include "lists.h"


/**
 * list_len - returns then number of elements in a list.
 * @h: pointer to the list_t list.
 *
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
