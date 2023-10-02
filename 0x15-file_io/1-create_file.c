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
	int fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	size_t j = 0;

	if (fp == -1)
		return (-1);
	if (!filename)
		return (-1);
	if (text_content)
	{
		j = write(fp, text_content, len);
		if (j == -1)
			return (-1);
	}
	close(fp);
	return (j == len ? 1 : -1);
}
