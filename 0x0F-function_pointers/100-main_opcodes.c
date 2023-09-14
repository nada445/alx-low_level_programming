#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num
 * @argv: wdc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *ptr = (char *)main;
int i;
int j;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
for (j = 0; j < i; j++)
printf("%02hhx ", *ptr++);
printf("\n");
return (0);
}
