#include "lists.h"
#include <string.h>
/**
* free_list - A function that frees a list_t list
* @head: A pointer to the beginning of the linked list
*
* Return: Always 0
*/
void free_list(list_t *head)
{
	list_t *basket;

	while (head)
	{
		basket = head;
		head = head->next;
		free(basket->str);
		free(basket);
	}
	free(head);
}
