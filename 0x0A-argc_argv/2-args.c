#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the argument passed in.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
