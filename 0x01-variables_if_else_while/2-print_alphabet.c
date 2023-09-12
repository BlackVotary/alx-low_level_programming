#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);

	putchar('\n');
	return (0);
}
