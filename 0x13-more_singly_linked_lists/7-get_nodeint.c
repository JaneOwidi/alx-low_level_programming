#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: function parameter
 * @index: function parameter
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}
	return (t ? t : NULL);
}
