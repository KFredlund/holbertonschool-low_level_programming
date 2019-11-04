#include "lists.h"
/**
* listint_len - A function taht returns the number
* of elements in a linked list
* @h: head element of list
*
* Return: The number of elements
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
