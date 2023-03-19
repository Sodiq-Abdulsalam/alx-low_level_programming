#include <stdio.h>

/**
 * main - start point of code block
 *
 * Return: return 0 when code is successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);

}
