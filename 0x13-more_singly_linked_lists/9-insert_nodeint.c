#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node in a position
 * @head: function parameter
 * @idx: function parameter
 * @n: function parameter
 * Return: NUL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *N;
	listint_t *t = *head;

	N = malloc(sizeof(listint_t));
	if (!N || !head)
		return (NULL);

	N->n = n;
	N->next = NULL;

	if (idx == 0)
	{
		N->next = *head;
		*head = N;
		return (N);
	}
	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			N->next = t->next;
			t->next = N;
			return (N);
		}
		else
			t = t->next;
	}
	return (NULL);
}
