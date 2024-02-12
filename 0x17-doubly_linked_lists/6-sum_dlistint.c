#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head of the list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
