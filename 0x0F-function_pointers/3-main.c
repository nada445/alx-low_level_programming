#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num
 * @argv:wdc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;
int (*ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

if (num2 == 0 && (op[0] == '/' || op[0] == '%'))
{
printf("Error\n");
exit(100);
}
ptr = get_op_func(op);
if (!ptr || strlen(op) > 1)
{
printf("Error\n");
exit(99);
}
result = ptr(num1, num2);
printf("%d\n", result);
return (0);
}
