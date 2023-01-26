#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t
 * @h: point to the head list
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
