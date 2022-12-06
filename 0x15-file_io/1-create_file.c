#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

int _strlen(char *s);

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_context: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure 
 * (file can not be created, file can not be written, write “fails”, etc)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY);

	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);

		if (fd == -1)
			return (-1);
	}

	write_count = write(fd, text_content, _strlen(text_content));

	if (write_count == -1)
		return (-1);

	close(fd);
	return (1);
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
