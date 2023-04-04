#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: function parameter
 * @n: function parameter
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *j;
	listint_t *t = *head;

	j = malloc(sizeof(listint_t));
	if (!j)
		return (NULL);
	j->n = n;
	j->next = NULL;

	if (*head == NULL)
	{
		*head = j;
		return (j);
	}

	while (t->next)
		t = t->next;
	t->next = j;
	return (j);
}
