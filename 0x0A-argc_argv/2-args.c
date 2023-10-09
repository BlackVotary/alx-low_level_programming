#include <stdio.h>

/**
 * main - a program that prints its name followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i - 1]);
	}
	return (0);
}
