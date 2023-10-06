#include <stdio.h>
/**
 * main - printing hex digits
 * from 0 to 9 and a to f
 * Return: 0 always when success
 */
int main(void)
{
	char hexdig = '0';

		while
		(hexdig <= '9')
		{
			putchar(hexdig);
			hexdig++;
		}
	hexdig = 'a';

		while
		(hexdig <= 'f')
		{
			putchar(hexdig);
			hexdig++;
		}
	putchar('\n');
	return (0);
}
