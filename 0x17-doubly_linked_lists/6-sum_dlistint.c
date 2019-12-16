#include "lists.h"
/**
* sum_dlistint - A function that returns the sum of all
* the data @n of a dlistint_t linked list
* @head: points to the beginning of the list
*
* Return: 0 if the list is empty, otherwise sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int data = 0;

	if (!head)
		return (0);
	current = head;
	while (current)
	{
		data += current->n;
		current = current->next;
	}
	return (data);
}
