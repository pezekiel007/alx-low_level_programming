#include "lists.h"
#include <stdio.h>

/**
 * print_list -a function that prints all the elements of a list_t
 * @h: pointer to the head list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
