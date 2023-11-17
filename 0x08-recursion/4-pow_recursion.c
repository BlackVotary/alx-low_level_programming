#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raise to power of y
 *
 * @x: the base number
 * @y: the exponetial
 *
 * Return: the value of x rasie to the power of y
 *         -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
