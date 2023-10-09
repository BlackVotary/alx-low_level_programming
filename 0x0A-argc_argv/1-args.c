#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0
 */


int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
