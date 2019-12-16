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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	*head = new;
	return (new);
}
