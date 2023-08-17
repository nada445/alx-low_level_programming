#include <stdio.h>

/**
 * main - Entry point
 * description: program to print numbers except for 3 and 5 multiples
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
