#include "main.h"

/**
* malloc_checked - allocates a memory using malloc
* @b: number of bytes to be allocated
* Return: returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
