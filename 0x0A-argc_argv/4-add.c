#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: arg count
 * @argv: pointer
 * Return: 0 on success, 1 on failure
 *
 */
int main(int argc, char *argv[])
{
	int i, j, s = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
