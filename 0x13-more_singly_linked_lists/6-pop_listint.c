#include "lists.h"
/**
* pop_listint - A function that deletes the head node of
* a listint_t linked list, and returns the head
* node's data
* @head: first node in a linked list
*
* Return: head node's data or 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int node_data;

	if (*head == NULL)
		return (0);
	if (current)
	{
		node_data = (*head)->n;
		*head = (*head)->next;
		free(current);
	}
	return (node_data);
}
