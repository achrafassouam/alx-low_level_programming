#include <stdio.h>
/**
 * main - program prints its own name
 * @argc: count variables
 * @argv: pointer
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
