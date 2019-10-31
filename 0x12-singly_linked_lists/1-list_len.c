#include "lists.h"
/**
*  list_len - A function that returns the number of elements in
* a a linked list
* @h: pointer to the beginning of the linked list
*
* Return: The number of elements in the list
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *this_node = h;

	while (this_node != NULL)
	{
		count++;
		this_node = this_node->next;
	}
	return (count);
}
