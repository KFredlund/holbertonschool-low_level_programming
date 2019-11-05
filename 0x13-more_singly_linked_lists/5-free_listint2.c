#include "lists.h"
#include <string.h>
/**
* free_listint2 - A function that frees a linked list
* @head: First node of a linked list
*
* Return: Never
*/
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
