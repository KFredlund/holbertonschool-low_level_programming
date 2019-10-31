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
	list_t *temp;
	char *str2 = strdup(str);

	temp = malloc(sizeof(list_t));
	temp->str = str2;
	temp->next = *head;
	*head = temp;
	return (*head);
}
