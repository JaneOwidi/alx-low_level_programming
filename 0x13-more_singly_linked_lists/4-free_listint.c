#include "lists.h"

/**
 * free_listint - frees lists
 * @head: function parameter
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
