#include "main.h"
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

num = 0;
powr = 0;
numofneg = 0;
n = _strlen(s);
if (s[0] == '\0')
return (0);
for (i = 0; i < n; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
idx = i;
while (s[i] >= '0' && s[i] <= '9' && i < n)
{
i++;
powr++;
}
break;
}
}
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
