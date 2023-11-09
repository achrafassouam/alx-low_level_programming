#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char used between words
 * @n: number of words
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);

	putchar('\n');
}
