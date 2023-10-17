#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: the pointer to the newly created array
 *         if min > max, return NULL
 *         if malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
