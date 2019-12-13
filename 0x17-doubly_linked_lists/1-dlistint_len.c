#include "lists.h"
/**
* dlistint_len - A function that returns the number of elements
* @h: Points to the head node
*
* Return: Number of elements in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}

