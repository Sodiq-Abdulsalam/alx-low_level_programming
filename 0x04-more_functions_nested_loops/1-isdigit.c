#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: input to be checked
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	return (1);

	else
	return (0);
}
