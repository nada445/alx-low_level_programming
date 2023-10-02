#include "main.h"
#define READ_BUF_SIZE 1024
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
 * create_file - rf
 *
 * @filename: kfkf
 * @text_content: tgfegfr
 * Return: rhgtyh
 */
int create_file(const char *filename, char *text_content)
{
	int len = _strlen(text_content);
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
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
/**
 * main - ref
 * @ac: teg
 * @av: rhyth
 * Return: erf
 */
int main(int ac, char **av)
{
	int fp1, fp2;
	int i;
	char buffer[8 * READ_BUF_SIZE];

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 27);
		exit(97);
	}
	fp2 = open(av[2], O_WRONLY);
	if (fp2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	i = create_file(av[2], NULL);
	if (i == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	fp1 = open(av[1], O_RDONLY);
	if (fp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	i = read(fp1, &buffer[0], 1024);
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	while ((i = write(fp2, buffer, 1024)) > 0)
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	i = close(fp1);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fp1);
		exit(100); }
	i = close(fp2);
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fp2), exit(100);
	return (0); }
