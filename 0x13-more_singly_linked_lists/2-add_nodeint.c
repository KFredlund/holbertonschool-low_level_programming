#include "lists.h"
/**
* add_nodeint - A function that adds a new node at
* the beginning of a listint_t list
* @head: first node of list
* @n: data variable
*
* Return: Address of the new element, or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int n2 = n;

	temp = malloc(sizeof(listint_t));
	if (n >= 0)
	{
		temp->n = n2;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (NULL);
}
