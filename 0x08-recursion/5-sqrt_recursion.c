#include "main.h"

/**
 * find_sqrt - finds the natural square root of n
 *
 * @n: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: the square root if the number has a natural squareroot
 *         -1 if it doesn't
 */


int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (find_sqrt(n, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number that would be square rooted
 *
 * Return: the square root if the number has a natural squareroot
 *         -1 if it doesn't
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
