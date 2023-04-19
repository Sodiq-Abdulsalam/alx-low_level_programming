#include "main.h"

/**
 * _sqrt_recursion - functions that computes the square root of an integer
 * @n: integer
 *
 * Return: computed square root
 */

int _sqrt_recursion(int n)
{
	return (_actual_sqrt_recursion(n, 1));
}

/**
 * _actual_sqrt_recursion - calculate the actual square root
 * @n: integer
 * @x: square root
 *
 * Return: result
 */

int _actual_sqrt_recursion(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_actual_sqrt_recursion(n, x + 1));
}
