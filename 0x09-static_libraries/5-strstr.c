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
int istrt;
char *tmp;
for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(haystack + i) == *(needle + 0))
{
istrt = i;
tmp = needle;
for (; *tmp != '\0'; tmp++)
{
if (*(haystack + istrt) != *tmp)
{
break;
}
istrt++;
}
if (*tmp  == '\0')
return (haystack + i);
}
}
return (NULL);
}
