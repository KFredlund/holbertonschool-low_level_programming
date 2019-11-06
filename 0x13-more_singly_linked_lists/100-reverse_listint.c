#include "lists.h"
/**
* reverse_listint - Function that reverses a list
* @head: pointer to beginning of linked list
*
* Return: A pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous =  NULL;
	listint_t *next;

	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
