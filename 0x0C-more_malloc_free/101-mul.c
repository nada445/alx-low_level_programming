#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 * _pow - power fun
 * @a: num1
 * @b: num2
 * Return: result
 */
int _pow(int a, int b)
{
int result;
int i;

result = 1;

for (i = 0; i < b; i++)
{
result *= a;
}
return (result);
}

/**
 * _atoi - conv str to int
 * @s: arr of str
 * Return: the int
 */

int _atoi(char *s)
{
unsigned int num;
int i;
int numofneg;
int n;
int powr;
int idx;
int flag;
flag = 0;
num = 0;
powr = 0;
numofneg = 0;
n = _strlen(s);
for (i = 0; i < n; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
idx = i;
while (s[i] >= '0' && s[i] <= '9' && i < n)
{
i++;
powr++;
}
break; }}
if (!flag)
return (0);
for (i = idx; powr > 0; i++)
{
num += (s[i] - 48) * _pow(10, powr - 1);
powr--;
}
for (i = 0; i < idx; i++)
{
if (s[i] == '-')
numofneg++;
}
if (numofneg % 2 != 0)
return (-1 * num);
return (num);
}
/**
 * print_number - print latge numbers with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
int i;
int countr;
unsigned int x;
int tmp;
x = n;
if (n > 2147483647)
return;
if (n < 0)
{
_putchar(45);
x = -1 * x;
}
countr = -1;
tmp = n;
while (tmp != 0)
{
countr++;
tmp /= 10;
}
for (i = _pow(10, countr); i != 0; i /= 10)
{
_putchar('0' + x / i);
x %= i;
}
}
/**
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
unsigned int result;
num1 = argv[1];
num2 = argv[2];
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (_atoi(num1) / (_pow(10, _strlen(num1) - 1)) == 0 && *num1 != '0')
{
printf("Error\n");
exit(98);
}
if (_atoi(num2) / (_pow(10, _strlen(num2) - 1)) == 0 && *num2 != '0')
{
printf("Error\n");
exit(98);
}
result = _atoi(num1) * _atoi(num2);

print_number(result);
printf("\n");
return (0);
}
