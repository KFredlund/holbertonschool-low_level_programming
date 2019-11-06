#include "lists.h"
/**
* reverse_listint - Function that reverses a list
* @head: pointer to beginning of linked list
*
* Return: A pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	if (*head != NULL)
	{
		previous = *head;
		current = (*head)->next;
		*head = (*head)->next;
		previous->next = NULL;
	}
	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = previous;
		previous = current;
		current = *head;
	}
	*head = previous;
	return (*head);
}
