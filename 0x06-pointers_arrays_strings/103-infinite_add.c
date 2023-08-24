#include "main.h"
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
 * infinite_add - adds 2 num
 * @n1: number1
 * @n2: num2
 * @r: result
 * @size_r: size of result
 * Return: void
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int max;
int carr;
int s1;
int s2;
int i;
int min;
int checkr;
int j;

s1 = _strlen(n1);
s2 = _strlen(n2);
carr = 0;

if (s1 >= size_r || s2 >= size_r)
{
r = 0;
return (r);
}
if (s1 > s2)
{
max = s1;
min = s2;
}
else
{
max = s2;
min = s1;
}
for (i = 0; i < min ; i++)
{
checkr = n1[s1 - 1 - i] + n2[s2 - 1 - i] - '0' - '0' + carr;
if (checkr <= 9)
{
r[max - 1 - i] = checkr + '0';
carr = 0;
}
else
{
r[max - i - 1] = checkr - 10 + '0';
carr = 1;
}
}
if (max == size_r - 1 && carr == 1)
return (0);
if (max == size_r - 2 && carr == 1)
{
for (i = max+1; i > 0; i--)
r[i]=r[i-1];
r[0]=carr+'0';
}
if (s1 > s2)
{
for (j = s1 - s2 ; j >= 0; j--)
{
checkr = n1[j] + carr - '0';
if (checkr <= 9)
{
r[j] = checkr + '0';
carr = 0;
}
else
{
r[j] = checkr - 10 + '0';
carr = 1;
}
}
if (carr == 1)
{
for (i = max+1; i > 0; i--)
r[i]=r[i-1];
r[0]=1+'0';
}
}
if (s1 < s2)
{
for (j = s2 - s1 ; j >= 0; j--)
{
checkr = n2[j] + carr - '0';
if (checkr <= 9)
{
r[j] = checkr + '0';
carr = 0;
}
else
{
r[j] = checkr - 10 + '0';
carr = 1;
}
}
if (carr == 1)
{
for (i = max+1; i > 0; i--)
r[i]=r[i-1];
r[0]=1+'0';
}
}
if (s1 == s2 && carr == 1)
{
for (i = max+1; i > 0; i--)
r[i]=r[i-1];
r[0]=1+'0';

}
return (r);
}
