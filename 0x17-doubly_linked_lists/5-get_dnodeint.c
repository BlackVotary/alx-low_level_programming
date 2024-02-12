#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head
 * @index: index
 * Return: pointer to the nth node
 *
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}

