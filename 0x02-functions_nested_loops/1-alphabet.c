#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_alphabet prints lowercase letters
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
