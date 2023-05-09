#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * create_file - creates a file
 * @filename:name of file to create
 * @text_content: text to write
 *
 * Return: 1 on succes 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | OTRUNC, S_TRUSR | S_TWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	closed(fd);
	return (bytes == len ? 1 : -1);
}
