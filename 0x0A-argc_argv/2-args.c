#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: arg count.
 * @argv: pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int v;

	v = 0;

	while (v < argc)
	{
		printf("%s\n", argv[v]);
		v++;
	}
	return (0);
}
