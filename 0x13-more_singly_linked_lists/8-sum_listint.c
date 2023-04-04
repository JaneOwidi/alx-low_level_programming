#include "lists.h"
/**
 * sum_listint - sums all the data
 * @head: function parameter
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}

