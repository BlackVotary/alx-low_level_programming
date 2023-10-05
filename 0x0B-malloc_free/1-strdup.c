#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string which will be pointed to
 *
 * Return: NULL if str is NULL
 *         on success, the returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	copy[len] = '\0';
