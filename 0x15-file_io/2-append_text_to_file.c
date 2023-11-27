#include "main.h"

int _strlen(char *str);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bWrite = 0;

	if (filename == NULL || text_content == NULL)
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

	if (bWrite == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}

/**
 * _strlen - count length of a string
 * @str: pointer to a string of char
 *
 * Return: lenght as an int
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
