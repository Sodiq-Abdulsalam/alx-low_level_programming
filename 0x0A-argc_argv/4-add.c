#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds the argument passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when successful, if error then  1.
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int x;
	int y;

	if (argc == 1)
	{
		;
	}
	for (x = 1; argv[x]; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
