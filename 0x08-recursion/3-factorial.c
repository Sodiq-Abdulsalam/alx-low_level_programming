#include "main.h"

/**
 * factorial - function that computes the factorial of an integer
 * @n: integer
 *
 * Return: factorial result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
