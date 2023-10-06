#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and uppercase followed by a new line
 * Return: 0 when success
 */
int main(void)
{
	char Letters = 'a';

	while
	(Letters <= 'z')
	{
		putchar(Letters);
		Letters++;
	}
	Letters = 'A';

	while
	(Letters <= 'Z')
	{
		putchar(Letters);
		Letters++;
	}

	putchar('\n');
	return (0);
}
