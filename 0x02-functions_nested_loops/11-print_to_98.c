#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 * @n: a number to start count from
 * description: count to 98
 * Return: Alwas 0 (Success)
 */
void print_to_98(int n)
{
int i, tmp;
if (n < 98)
{
for (i = n; i < 99; i++)
{
tmp = i;
if (i < 0)
{
_putchar('-');
i *= -1; }
if (i >= 10 || i * -1 >= 10)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10); }
else
_putchar('0' + i);
if (tmp != 98)
{
_putchar(',');
_putchar(' '); }
i = tmp; }}
else
{
for (i = n; i > 97; i--)
{
if (i >= 100)
{
_putchar('0' + i / 100);
_putchar('0' + (i % 100) / 10);
_putchar('0' + (i % 100) % 10);
}
else
{
_putchar('0' + i / 10);
_putchar('0' + i % 10); }
if (i != 98)
{
_putchar(',');
_putchar(' '); }}}
_putchar('\n'); }
