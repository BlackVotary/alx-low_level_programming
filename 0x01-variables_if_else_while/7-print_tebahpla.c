#include <stdio.h>

/**
  * main - Prints the alphabet at reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char alpharev;

	for (alpharev = 'z'; alpharev >= 'a'; alpharev--)
	{
		putchar(alpharev);
	}

	putchar('\n');

	return (0);
}
