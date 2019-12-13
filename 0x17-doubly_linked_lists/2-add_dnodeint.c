#include "lists.h"
/**
* add_dnodeint - A function that adds a new node at the
* beginning of a linked list
* @head: points to the head of the linked list
* @n: date value of new node
*
* Return: The address of teh new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	current = malloc(sizeof(dlistint_t));
	if (!current)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!current->next && *head)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		printf("%d\n", new->n);
	}
	*head = new;
	return (new);
}
