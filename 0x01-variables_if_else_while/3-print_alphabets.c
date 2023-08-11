#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char l = 97;
while (l != 123)
{
putchar(l);
l++;
}
l = 65;
while (l != 91)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}

