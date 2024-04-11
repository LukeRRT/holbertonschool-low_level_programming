#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Prints an error message
 * and exits with a specified code
 * @code: The exit code
 * @message: The error message to print
 *
 * Return: void
 */

void print_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Entry point. Copies content of one file to another.
 * @argc: The number of arguments passed
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, other values on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUF_SIZE];
	struct stat st;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");
	if (stat(argv[2], &st) == 0 && !S_ISREG(st.st_mode))
	{
		print_error_and_exit(99, "Error: Can't write to file");
		fd_from = open(argv[1], O_RDONLY);
		if (fd_from == -1)
			print_error_and_exit(98, "Error: Can't read from file");
		fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			close(fd_from);
			print_error_and_exit(99, "Error: Can't write to file");
		}
		while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
		{
			bytes_written = write(fd_to, buf, bytes_read);
			if (bytes_written == -1 || bytes_written != bytes_read)
			{
				close(fd_from);
				close(fd_to);
				print_error_and_exit(99, "Error: Can't write to file");
			}
		}
		if (bytes_read == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(98, "Error: Can't read from file");
		}
		if (close(fd_from) == -1 || close(fd_to) == -1)
			print_error_and_exit(100, "Error: Can't close file descriptor");
	}
	else
		print_error_and_exit(99, "Error: Can't write to file");
	return (0);
}
