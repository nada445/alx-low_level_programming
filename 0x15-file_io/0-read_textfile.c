#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#define READ_BUF_SIZE 1024
/**
 *  read_textfile - dfgvf
 *  @filename: rhth
 *  @letters: jfjf
 *  Return: kjdfjf
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char s[READ_BUF_SIZE * 8];
	int fp, i;
	size_t j;

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDWR);
	if (fp < 0)
		return (0);
	i = read(fp,&s[0], letters);
	if (i < 0)
		return (0);
	j = write(STDOUT_FILENO, &s[0], letters);
	if (j != letters)
		return (0);
	close(fp);
	return (j);
}
