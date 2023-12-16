#include "main.h"

/**
 * _strlen - Calculates the length of a string recursively.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @i: The index to start checking from
 * @len: The length of the string
 *
 * Return: 1 if string is a palindrome, 0 if not.
*/

int check_palindrome(char *s, int i, int len)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);

	return (check_palindrome(s, i+1, len));
}

/**
 * is_palindrom - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: check_palindrome
*/

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len));
}
