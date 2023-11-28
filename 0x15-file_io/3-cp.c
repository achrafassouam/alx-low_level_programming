#include "main.h"
#include <stdio.h>

#define E_USSAGE "Usage: cp file_from file_to\n"
#define E_READ "Error: Can't read from file %s\n"
#define E_WRITE "Error: Can't write to %s\n"
#define E_CLOSE "Error: Can't close fd %d\n"

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
	int ofile, tfile, rfile;
	char buff[1024];

	ofile = open(file_from, O_RDONLY);

	if (!file_from || ofile == -1)
	{
		dprintf(STDERR_FILENO, E_READ, file_from);
		exit(98);
	}

	tfile = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rfile = read(ofile, buff, 1024)) > 0)
	{
		if (write(tfile, buff, rfile) != rfile || tfile == -1)
		{
			dprintf(STDERR_FILENO, E_WRITE, file_to);
			exit(99);
		}
	}

	if (rfile == -1)
	{
		dprintf(STDERR_FILENO, E_READ, file_from);
		exit(98);
	}

	if (close(ofile) == -1)
	{
		dprintf(STDERR_FILENO, E_CLOSE, ofile);
		exit(100);
	}

	if (close(tfile) == -1)
	{
		dprintf(STDERR_FILENO, E_CLOSE, tfile);
		exit(100);
	}
}
