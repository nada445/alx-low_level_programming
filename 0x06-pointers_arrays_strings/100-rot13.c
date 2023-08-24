#include "main.h"
/**
 * rot13 - change 13 place
 * @a: arr
 * Return: string after changing
 */

char *rot13(char *a)
{
int i;
int j;

char orarr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char charr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; orarr[j] != '\0'; j++)
{
if (a[i] == orarr[j])
{
a[i] = charr[j];
break;
}
}
}
return (a);
}
