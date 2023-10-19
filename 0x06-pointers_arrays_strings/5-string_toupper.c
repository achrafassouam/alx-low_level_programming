#include "main.h"
/**
 * string_toupper - print lowercase letter in uppercase
 * @a: char type pointer
 * Return: a.
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 'a' - 'A';
		}
		i++;
	}
	return (a);
}
