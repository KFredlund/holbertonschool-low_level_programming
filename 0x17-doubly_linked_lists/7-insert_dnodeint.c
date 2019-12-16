#include "lists.h"
/**
* insert_dnodeint_at_index - A function that inserts a new node
* at a given position
* @h: points to the beginning of the list
* @idx: position at which to insert the new node
* @n: data of new node to be inserted
*
* Return: Address of new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h)
	{
		*h = new;
		return (new);
	}
	current = *h;
	for (; i != idx; i++)
	{
		if (i < idx)
			current = current->next;
	}
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	return (new);
}
