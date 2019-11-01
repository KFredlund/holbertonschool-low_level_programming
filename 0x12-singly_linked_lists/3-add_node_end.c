#include "lists.h"
#include <string.h>
/**
* add_node_end - Function that adds a new node at the end of a list
* @head: pointer to an array that hold the address of the first element
* @str: pointer to a string
*
* Return: The address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp, *tail;
	char *newstr = strdup(str);

	if (!(str))
		return (NULL);
	temp = malloc(sizeof(list_t));
	while (str[len++])
		;
	temp->str = newstr;
	temp->len = len - 1;
	temp->next = NULL;
	tail = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = temp;
	return (temp);
}
