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
char u = 65;
while (u != 91)
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}

