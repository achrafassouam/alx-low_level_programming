#include "main.h"
/**
 * _isalpha - checkes if the char is an alphabet
 * @c: The character to print
 * Return: 1 if correct, 0 otherwise
*/
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
