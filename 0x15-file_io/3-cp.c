#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *content_from;
	int fd1, fd2;
	ssize_t write_count;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		print_cant_read_err(av[0]);
		return (98);
	}

	content_from = read_textfile_(fd1, 1024);
	if (content_from == NULL)
	{
		print_cant_read_err(av[0]);
		return (98);
	}

	fd2 = open(filename, O_WRONLY);
	if (fd2 == -1)
	{
		fd2 = open(filename, O_CREAT | O_WRONLY, 0600);

		if (fd2 == -1)
		{
			print_cant_read_err(av[0]);
			return (99);
		}
	}

	write_count = write(fd, text_content, _strlen(text_content));

	if (write_count == -1)
	{
		print_cant_read_err(av[0]);
		return (99);
	}


	/**res = append_text_to_file(av[1], av[2]);*/
	printf("%s\n", content_from);
	return (0);
}

/**
 * write_file - writes in file
 * @fd: the file descriptor
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be written, write “fails”, etc)
 */
int write_file(const int fd, char *text_content)
{
	ssize_t write_count;

	write_count = write(fd, text_content, _strlen(text_content));

	if (write_count == -1)
		return (-1);

	return (1);
}

/**
 * print_cant_read_err - ccc
 * @filename: filename
 * Return: Always void
 */
void print_cant_read_err(char *filename)
{
	char msg[] = "Error: Can't read from file ";
	write(STDERR_FILENO, msg, _strlen(msg));
	write(STDERR_FILENO, filename, _strlen(filename));
	write(STDERR_FILENO, "\n", 1);
}
