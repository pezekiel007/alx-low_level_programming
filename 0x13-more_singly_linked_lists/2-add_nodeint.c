#include <string.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list.
 * @n: integer for the new nodes
 * @head: pointer to listint_t
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
