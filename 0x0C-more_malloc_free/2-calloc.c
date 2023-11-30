#include "main.h"

/**
 * _calloc - allocates memory for an array of a certain number of elements
 * @nmemb: the number of elememts
 * @size: the byte size of each elements
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fill = mem;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (mem);
}
