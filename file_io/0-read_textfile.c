#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number of letter that should be read and printed
 *
 *
 * Return: actula number of lettters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters = 1];
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
