#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a list
 * @head: pointer
 * @n: function parameter
 * Return: address to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;

	j = malloc(sizeof(listint_t));
	if (!j)
		return (NULL);
	j->n = n;
	j->next = *head;
	*head = j;

	return (j);
}
