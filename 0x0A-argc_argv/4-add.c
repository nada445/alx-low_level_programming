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
	char *tmp;
	int size;
	int j;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		tmp = argv[i];
		size = strlen(tmp);

		for ( j = 0; j < size; j++)
		{
			if (*(tmp + j) < '0' || *(tmp + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
