#include "lists.h"
#include <string.h>
/**
* free_listint - A function that frees a linked list
* @head: First node of a linked list
*
* Return: Never
*/
void free_listint(listint_t *head)
{
	listint_t *basket;

	while (head)
	{
		basket = head;
		head = head->next;
		free(basket);
	}
	free(head);
}
