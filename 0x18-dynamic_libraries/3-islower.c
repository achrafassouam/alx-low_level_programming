#include "main.h"
/**
* _islower - check if letter is lowercase
* @c: is the char to be checked
* Return: 1 if letteris lowercase, otherwise 0.
**/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
