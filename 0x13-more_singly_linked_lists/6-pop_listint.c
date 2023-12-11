#include <stdlib.h>  // Include for free
#include "function_pointers.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the address of the head of the list.
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data = 0;
    listint_t *temp;

    if (*head != NULL)
    {
        /* Save the data of the head node */
        data = (*head)->n;

        /* Update the head to point to the next node */
        temp = *head;
        *head = (*head)->next;

        /* Free the old head node */
        free(temp);
    }

    return data;
}

