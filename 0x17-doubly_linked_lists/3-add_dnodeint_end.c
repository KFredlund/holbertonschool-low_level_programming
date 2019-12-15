#include "lists.h"
/**
* add_dnodeint_end - A function that adds a new node at the end
* @head: beginning of list
* @n: data of new node
*
* Return: The address of the new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = malloc(sizeof(dlistint_t));
	if (!current)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (current)
	{
		current = current->next;
	}
	new->prev = current;
	current->next = new;
        new->next = NULL;
	return (new);
}
