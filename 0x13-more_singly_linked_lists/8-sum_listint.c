#include "lists.h"
/**
* sum_listint - A function that returns the sum of all
* the data of a linked list
* @head: beginning of linked list
*
* Return: sum of each node's data, 0 of list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
