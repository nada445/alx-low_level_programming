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

for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: num of args
 * @av: args
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
int size;
int i;
char *arr;
char *str;
int j;
int cntr;
size = 0;
cntr = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
}
for (i = 1; i < ac; i++)
{
size += _strlen(av[i]);
}
arr = (char *)malloc(size + 1 + ac);
if (arr == NULL)
return (NULL);
for (i = 1; i < (ac); i++)
{
str = av[i];
for (j = 0; str[j] != '\0'; j++)
{
arr[cntr] = str[j];
cntr++;
}
arr[cntr] = '\n';
cntr++;
}
arr[cntr] = '\0';
return (arr);
}
