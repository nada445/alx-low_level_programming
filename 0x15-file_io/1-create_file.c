#include "main.h"
#include <unistd.h>
#include "main.h"
/**
 * _strlen - prints out the length of the str
 * @s: str to print its size
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}
/**
 * create_file - rf
 *
 * @filename: kfkf
 * @text_content: tgfegfr
 * Return: rhgtyh
 */
int create_file(const char *filename, char *text_content)
{
	size_t len = _strlen(text_content);
	int fd;
	size_t j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (len > 0 && write(fd, text_content, len) != len)
	{
	close(fd);
	return (-1);
	}
	close(fd);
	return (1);
}
