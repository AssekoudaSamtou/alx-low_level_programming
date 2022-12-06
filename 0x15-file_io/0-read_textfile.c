#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the filename
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count;
	ssize_t write_count;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	read_count = read(fd, buf, letters);

	if (read_count == -1)
		return (0);

	buf[letters] = '\0';

	write_count = write(STDOUT_FILENO, buf, read_count);

	if (write_count == -1 || read_count != write_count)
		return (0);

	close(fd);
	return (write_count);
}
