#include "main.h"

/**
 *
 *
 */

int fd_from, fd_to;
char buffer[1024];
ssize_t bytes_read;
const char *file_from;
const char *file_to;

void exit_with_error(int code, const char *message, const char *filename, int fd)
{
	fd = dprintf(STDERR_FILENO, message, filename);
	
	if (fd != -1)
	{
		close(fd);
	}

	exit(code);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];	

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", file_from, -1);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		exit_with_error(99, "Error: Can't write to %s\n", file_to, fd_from);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			exit_with_error(99, "Error: Can't write to %s\n", file_to, fd_from);
		}
	}

	if (bytes_read == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", file_from, fd_from);
	}

	if (close(fd_from) == -1)
	{
		exit_with_error(100, "Error: Can't close fd %d\n", file_from, fd_from);
	}

	if (close(fd_to) == -1)
	{
		exit_with_error(100, "Error: Can't close fd %d\n", file_to, fd_to);
	}

	return 0;
}
