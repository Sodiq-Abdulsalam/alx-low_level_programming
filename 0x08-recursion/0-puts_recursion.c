#include "main.h"

/**
 * _put_recursion - function that prints a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	_putchar(*s);
	_put_recursion(s++);
}
