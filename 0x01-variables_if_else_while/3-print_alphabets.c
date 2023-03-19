#include <stdio.h>

/**
 * main- start point od code block
 *
 * Return: return 0 when code is successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
