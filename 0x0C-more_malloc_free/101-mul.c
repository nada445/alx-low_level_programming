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
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
char *num1, *num2;
unsigned long int result;
num1 = argv[1];
num2 = argv[2];
if (argc != 3)
{
printf("Error\n");
exit(98); }
for (i = 0; i < _strlen(num1); i++)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error\n");
exit(98);
}
}
for (i = 0; i < _strlen(num2); i++)
{
if (num2[i] < '0' || num2[i] > '9')
{
printf("Error\n");
exit(98);
}
}
result = atoi(num1) * atoi(num2);
printf("%lu\n", result);
return (0); }
