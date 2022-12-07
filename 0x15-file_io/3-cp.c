#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

int _strlen(char *s);
int write_file(const int fd, char *text_content);
void print_cant_read_err(char *filename);
void print_cant_write_err(char *filename);
void print_cant_close_err(int fd);

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
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 27);
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		print_cant_read_err(av[0]);
		exit(98);
	}

	content_from = read_textfile_(fd1, 1024);
	if (content_from == NULL)
	{
		print_cant_read_err(av[0]);
		exit(98);
	}

	fd2 = open(av[2], O_WRONLY);
	if (fd2 == -1)
	{
		fd2 = open(av[2], O_CREAT | O_WRONLY, 0662);

		if (fd2 == -1)
		{
			print_cant_write_err(av[0]);
			exit(99);
		}
	}

	write_count = write(fd2, content_from, _strlen(content_from));

	if (write_count == -1)
	{
		print_cant_write_err(av[0]);
		exit(99);
	}

	if (!close(fd1))
	{
		print_cant_close_err(fd1);
		exit(100);
	}

	if (!close(fd2))
	{
		print_cant_close_err(fd2);
		exit(100);
	}

	exit(0);
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

/**
 * print_cant_write_err - ccc
 * @filename: filename
 * Return: Always void
 */
void print_cant_write_err(char *filename)
{
	char msg[] = "Error: Can't write to ";
	write(STDERR_FILENO, msg, _strlen(msg));
	write(STDERR_FILENO, filename, _strlen(filename));
	write(STDERR_FILENO, "\n", 1);
}

/**
 * print_cant_close_err - ccc
 * @filename: filename
 * Return: Always void
 */
void print_cant_close_err(int fd)
{
	char msg[] = "Error: Can't close fd ";
	write(STDERR_FILENO, msg, _strlen(msg));
	write(STDERR_FILENO, &fd, sizeof(fd));
	write(STDERR_FILENO, "\n", 1);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
