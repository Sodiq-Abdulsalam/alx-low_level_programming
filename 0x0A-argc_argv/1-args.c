#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed into it returns interger and string.
 * @argc: argument count.
 * @argv: argument array or vector.
 *
 * Return: always 0.
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
