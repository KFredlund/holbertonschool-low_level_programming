#include "lists.h"
/**
* get_dnodeint_at_index - gets node at index @index
* @head: points to the beginning of the list
* @index: nth position of node
* Return: 9th node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = head;
	for (i = 0; i != index; i++)
		if (i > index)
			return (NULL);
		current = current->next;
	return (current);
}
