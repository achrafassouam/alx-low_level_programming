#include "main.h"
/**
 * _strlen - count the length of a string
 * @s: char type input
 * Return: a, the lenght of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0\)
	{
		a++;
		s++;
	}
	return (a);
}
