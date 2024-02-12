#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of list
 *
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
