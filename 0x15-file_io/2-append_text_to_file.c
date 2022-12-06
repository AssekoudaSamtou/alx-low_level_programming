#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int _strlen(char *s);
/**extern int errno;*/

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	/**int errnum;*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
		write_count = write(fd, text_content, _strlen(text_content));

	/**
	 * errnum = errno;
	 * fprintf(stderr, "Value of errno: %d\n", errno);
	 * perror(filename);
	 * fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
	 */
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
