#include <stddef.h>  // Include for NULL
#include "function_pointers.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *current = head;

    /* Traverse the list until reaching the desired index or the end of the list */
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    /* If the index is out of bounds, return NULL */
    if (i < index)
    {
        return NULL;
    }

    return current;
}

