#include "main.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring.
 * @haystack: pointer (memory block to scan)
 * @needle: pointer (memory block reference)
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int flag;
int istrt;
int n;

flag = 0;

for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(haystack + i) == *(needle + 0))
{
flag = 1;
istrt = i;
for (n = 0; *(needle + n) != '\0'; n++)
{
if (*(haystack + istrt) != *(needle + n))
{
flag = 0;
break;
}
istrt++;
}
if (flag == 1)
return (haystack + i);
}
}
return (NULL);
}
