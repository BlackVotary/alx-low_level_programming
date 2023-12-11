#include <stdio.h>
#include <stdlib.h>  // Include for malloc
#include "function_pointers.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the address of the head of the list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: Integer value to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp;
    unsigned int i;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        /* Return NULL if memory allocation failed */
        return NULL;
    }

    /* Set the data and the next pointer of the new node */
    new_node->n = n;

    /* If the desired index is 0, insert the new node at the beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    /* Traverse to the node before the desired index */
    temp = *head;
    for (i = 0; temp != NULL && i < idx - 1; i++)
    {
        temp = temp->next;
    }

    /* If the index is out of bounds, or the previous node is NULL, return NULL */
    if (temp == NULL || i < idx - 1)
    {
        free(new_node);
        return NULL;
    }

    /* Insert the new node at the desired index */
    new_node->next = temp->next;
    temp->next = new_node;

    return new_node;
}

