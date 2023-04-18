#include "main.h"

/**
 * _put_recursion - function that prints a string
 * @s: string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
