#include "lists.h"
extern void free(void *__ptr) __THROW;
/**
* free_dlistint - A function that frees a doubly linked list
* @head: points to the beginning of the list
*
* Return: never
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
