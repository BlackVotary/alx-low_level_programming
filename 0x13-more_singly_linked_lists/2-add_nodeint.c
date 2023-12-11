#include <stdio.h>
#include <stdlib.h>  // Include for malloc
#include "function_pointers.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the address of the head of the list.
 * @n: Integer value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        /* Return NULL if memory allocation failed */
        return NULL;
    }

    /* Set the data and the next pointer of the new node */
    new_node->n = n;
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return new_node;
}
