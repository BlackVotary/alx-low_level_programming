#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenates a string using at most @n bytes
* @s1: the first string
* @s2: the second string
* @n: max number of bytes of s2 to be concatenated to s1
* Return: a pointer to the concatenated space in memory
*         Null if failed
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		concat[len] = s1[i];
		len++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concat[len] = s2[i];
		len++;
	}
	concat[len] = '\0';

	return (concat);

}
