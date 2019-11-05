#include "lists.h"
/**
* get_nodeint_at_index - A function that returns the
* nth node of a listint_t linked list
* @head: start of linked list
* @index: nth index to be returned
*
* Return: The nth node of a list or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i <= index; i++)
		n_node = head->next;
	return (n_node);
}
