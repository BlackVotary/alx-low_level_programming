#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t count = 0;

    tortoise = head;
    hare = head;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;

        tortoise

