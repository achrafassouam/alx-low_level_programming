#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argm count
 * @argv: pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
