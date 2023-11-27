#include "main.h"

int _strlen(char *str);

/**
 *
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bWrite = 0;

	if (filename == NULL | text_content == NULL)
	{
		return (-1);
	}

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bWrite = write(file, text_content, _strlen(text_content));
	}

	if (bwrite == -1)
	{
		close(file);
		return (-1);
	}

	close (file);
	return (1);
}

/**
 * _strlen - length of a sring
 * @str: pointer to a string of char
 *
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
