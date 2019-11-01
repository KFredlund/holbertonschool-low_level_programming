#include "lists.h"
#include <string.h>
/**
* add_node - A function that adds a new node at the beginning  of
* a linked list
* @head: pointer to an array in the first element of the list
* @str: pointer to a string
*
* Return: The address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *temp;
	char *str2 = strdup(str);

	while (str[i++])
		;
	temp = malloc(sizeof(list_t));
	if (str)
	{
		temp->str = str2;
		temp->len = i - 1;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (NULL);
}
