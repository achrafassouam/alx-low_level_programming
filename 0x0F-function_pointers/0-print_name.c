#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to string
 * @f: function name
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
