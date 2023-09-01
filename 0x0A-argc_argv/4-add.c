#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	  if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
