#include <stdio.h>

/**
 * main - start point of code block
 *
 * Return: return 0 when the code is successful
 */

int main(void)
{

	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
