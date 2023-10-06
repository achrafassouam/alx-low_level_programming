#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * except e and q
 * Return: 0 when success
 */
int main(void)
{
	char letter = 'a';

	while
	(letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
			letter++;
	}
	putchar('\n');
	return (0);
}
