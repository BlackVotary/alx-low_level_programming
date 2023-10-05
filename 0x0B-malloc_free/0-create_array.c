#include "main.h"


/**
 * create_array - cretaes an array of chars and
 *                intialize it with a specific char
 * @size: size of the array
 * @c: the char it will be initialized with
 *
 * Return: NULL if size = 0
 *         pointer to the array or NULL if failed
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

