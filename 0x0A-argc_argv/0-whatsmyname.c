#include <stdio.h>

/**
 * main - main to prints file name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * return : always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
