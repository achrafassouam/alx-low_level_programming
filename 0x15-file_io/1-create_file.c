#include "main.h"

int _strlen(char *str);

/**
 * create_file - creates a file
 * @filename : name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int file;
	ssize_t bWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bWrite = write(file, text_content, _strlen(text_content));
		if (bWrite == -1)
		{
			close(file);
			return (-1);
		}
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
