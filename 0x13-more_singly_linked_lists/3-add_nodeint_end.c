#include "lists.h"
/**
* add_nodeint_end - A function that adds a new node at
* the end of a listint_t list
* @head: beginning of the list
* @n: data
*
* Return: The address of the new element, or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *tail;
	int n2 = n;

	if (n < 0)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	temp->n = n2;
	temp->next = NULL;
	tail = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (temp);
}
