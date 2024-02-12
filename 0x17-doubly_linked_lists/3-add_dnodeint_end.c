#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: number
 * Return: address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

	tmp->next = new;
	new->prev = tmp;
	}

	return (new);

}
