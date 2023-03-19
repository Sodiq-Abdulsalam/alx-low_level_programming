#include <stdio.h>
/**
 * main - start point for code
 *
 * Return: return 0 when the program is successful
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
