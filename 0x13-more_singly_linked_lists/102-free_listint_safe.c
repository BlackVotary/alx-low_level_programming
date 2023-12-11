#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the address of the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *tortoise, *hare, *temp;
    size_t size = 0;

    tortoise = *h;
    hare = *h;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        temp = tortoise;
        tortoise = tortoise->next;
        hare = hare->next->next;

        /* Free the node pointed to by the tortoise */
        free(temp);

        size++;

        if (tortoise == hare)
        {
            /* Loop detected, free the remaining nodes and exit the loop */
            tortoise = *h;
            while (tortoise != hare)
            {
                temp = tortoise;
                tortoise = tortoise->next;
                free(temp);
                size++;
            }
            break;
        }
    }

    *h = NULL;  /* Set the head to NULL after freeing the list */

    return size;
}

