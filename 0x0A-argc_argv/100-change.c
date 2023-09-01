#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;
	int count;
	int tmp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;

	if (num <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	count += num / 25;
	num -= count * 25;
	count += num / 10;
	tmp = num / 10;
	num -=  tmp * 10;
	count += num / 5;
	tmp = num / 5;
	num -= tmp * 5;
	count += num / 2;
	tmp = num / 2;
	num -= tmp * 2;
	count += num;

	printf("%d\n", count);
	return (0);
}
