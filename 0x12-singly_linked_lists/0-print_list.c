#include "lists.h"
/**
* print_list -  A function that prints all the elements of a list
* @h: Struct variable holding pointing to elements to be printed
*
* Return: The number of nodes, or nil if string is NULL
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
