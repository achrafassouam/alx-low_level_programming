#include "main.h"
#include <stdio.h>
#define BUFFER_S 1024
#define ERR_WRT "Error: Can't write to destination file %s\n"
void copy_file(const char *file_from, const char *file_to);
/**
 * main - check argument count
 * @argc: argument count
 * @argv: pointer to arg variable
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copy a file from source to destination
  * @file_from: source
  * @file_to: destination
  * Return: An exit message
  */
void copy_file(const char *file_from, const char *file_to)
{
	int old_file, dest_file;
	ssize_t bRead, bsWrite;
	char buffer[BUFFER_S];

	old_file = open(file_from, O_RDONLY);
	if (!file_from || old_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest_file = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(old_file);
		exit(99);
	}

	while ((bRead = read(old_file, buffer, BUFFER_S)) > 0)
	{
		bsWrite = write(dest_file, buffer, bRead);
		if (bsWrite != bRead || bsWrite == -1)
		{
			dprintf(STDERR_FILENO, ERR_WRT, file_to);
			close(old_file);
			close(dest_file);
			exit(99);
		}
	}

	if (bRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file %s\n", file_from);
		close(old_file);
		close(dest_file);
		exit(98);
	}
	if (close(old_file) == -1 || close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
}
