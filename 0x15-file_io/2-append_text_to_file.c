#include "main.h"
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

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}
/**
 * append_text_to_file - sdfdf
 * @filename: reg
 * @text_content: etgr
 * Return: rtg
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int j = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);
	if (len)
		j = write(fp, text_content, len);
	return (j == len ? 1 : -1);
}
