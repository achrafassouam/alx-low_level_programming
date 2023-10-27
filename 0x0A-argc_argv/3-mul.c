#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and print resutls
 * @argc: arg count
 * @argv: pointer
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;

	mul1 = mul2 = 0;
	if (argc == 3)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		printf("%d\n", mul1 * mul2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
