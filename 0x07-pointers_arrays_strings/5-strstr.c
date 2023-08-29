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

for (i = 0; *haystack != '\0'; haystack += i)
{
char *hay = haystack;
char *need = needle;
while (*hay == *need && *need != '\0')
{
hay++;
need++;
}
if (*need == '\0')
return (haystack);

}

return (NULL)

}
