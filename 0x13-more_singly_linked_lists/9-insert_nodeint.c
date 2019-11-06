#include "lists.h"
/**
* insert_nodeint_at_index - A function that inserts a new
* at a given position
* @head: points to the beginning of the linked list
* @idx: given position to insert new node
* @n: new node data
*
* Return: Address of new node, or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head, *previous;

	new_node->n = n;
	if (!n)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	else
	{
		while (idx > 0)
		{
			previous = temp;
			temp = temp->next;
		}
		previous->next = new_node;
		new_node->next = temp;
		return (*head);
	}
}
