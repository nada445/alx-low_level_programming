#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
counter++;
return (counter); }
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
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
unsigned long int result;
num1 = argv[1];
num2 = argv[2];
if (argc != 3)
{
printf("Error\n");
exit(98); }
if (atoi(num1) / (_pow(10, _strlen(num1) - 1)) == 0 && *num1 != '0')
{
printf("Error\n");
exit(98); }
if (atoi(num2) / (_pow(10, _strlen(num2) - 1)) == 0 && *num2 != '0')
{
printf("Error\n");
exit(98); }
result = atoi(num1) * atoi(num2);
printf("%lu\n", result);
return (0); }
