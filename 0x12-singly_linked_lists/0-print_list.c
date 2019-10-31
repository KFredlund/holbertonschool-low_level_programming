#include "lists.h"
/**
* print_list -  A function that prints all the elements of a list
* @h: Struct variable holding pointing to elements to be printed
*
* Return: The number of nodes, or nil if string is NULL
*/
size_t print_list(const list_t *h)
{
	const list_t *this_node = h;
	int count = 0;

	while (this_node != NULL)
	{
		if (this_node->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			this_node = this_node->next;
		}
		else
		{
			printf("[%d] %s\n", this_node->len, this_node->str);
			count++;
			this_node = this_node->next;
		}
	}
	return (count);
}
