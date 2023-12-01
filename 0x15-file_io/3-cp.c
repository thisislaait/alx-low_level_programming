#include "main.h"

/**
 * main - Program to copy contents from one file to another.
 * @ac: Argument count.
 * @av: Array of arguments.
 * Return: Exit status.
 */
int main(int ac, char **av)
{
	int fdFrom, fdTo, bytesWritten, bytesRead;
	char buffer[1024];

	/* Check for the correct number of arguments */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading */
	fdFrom = open(av[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Open the destination file for writing, creating if it doesn't exist, truncate if it does */
	fdTo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	/* Copy data from source to destination */
	while ((bytesRead = read(fdFrom, buffer, 1024)) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	/* Check for read error */
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Close file descriptors */
	if (close(fdFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrom);
		exit(100);
	}
	if (close(fdTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdTo);
		exit(100);
	}

	return (0);
}
