#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char h = 97;
while (h != 123)
{
if (h != 101 && h != 113)
putchar(h);
h++;
}

putchar('\n');
return (0);
}
