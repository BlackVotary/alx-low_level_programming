#include "function_pointers.h"

/**
 * find_listint_loop - Finds the loop in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise, *hare;

    tortoise = head;
    hare = head;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            /* Loop detected, reset one pointer to the head and move both one step at a time */
            tortoise = head;
            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }

            /* Return the address of the node where the loop starts */
            return tortoise;
        }
    }

    return NULL;  /* No loop detected */
}

