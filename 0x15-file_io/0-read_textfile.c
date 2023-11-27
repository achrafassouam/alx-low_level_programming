#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: points to the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *	0 if file is NULL, cannot open or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bRead, bWrite;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bRead = read(file, buffer, letters);
	if (bRead == -1)
	{
		close(file);
		return (0);
	}

	bWrite = write(STDOUT_FILENO, buffer, bRead);
	if (bWrite == -1 || bWrite != bRead)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (bRead);
}
