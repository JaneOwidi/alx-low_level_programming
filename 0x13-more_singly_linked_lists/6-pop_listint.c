#include "lists.h"
/**
 * pop_listint - deletes head node of linked list, returns head node data
 * @head: function parameter
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (n);
}

