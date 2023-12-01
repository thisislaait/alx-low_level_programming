#include "main.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	int fdFrom, fdToo, wrote, read;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrom = open(av[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdToo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdToo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((read = read(fdFrom, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, read);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fdFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrom);
		exit(100);
	}
	if (close(fdToo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdToo);
		exit(100);
	}
	return (0);
}
