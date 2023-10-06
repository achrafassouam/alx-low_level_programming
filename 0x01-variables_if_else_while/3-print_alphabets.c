#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and uppercase followed by a new line
 * Return: 0 when success
 */
int main(void)
{
	char lowercaseletters = 'a';

	while
	(lowercaseletters <= 'z')
	{
		putchar(lowercaseletters);
		lowercaseletters++;
	}

	char uppercareletters = 'A';

	while
	(uppercareletters <= 'Z')
	{
		putchar(uppercareletters);
		uppercareletters++;
	}

	putchar('\n');
	return (0);
}
