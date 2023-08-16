#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_times_table - print n times table
 * @n: number
 * description: learn times table
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i;
if (n > 15 || n < 0)
return;
for (i = 0; i <= n; i++)
{
int j;
for (j = 0; j <= n; j++)
{
int result = i * j;
if (result < 10)
{
_putchar('0' + result); }
else if (result >= 10 && result < 100)
{
_putchar('0' + result / 10);
_putchar('0' + result % 10); }
else
{
_putchar('0' + result / 100);
_putchar('0' + (result % 100) / 10);
_putchar('0' + (result % 100) % 10); }
if (i * (j + 1) >= 100 && j != n)
{
_putchar(',');
_putchar(' '); }
else if (i * (j + 1) >= 10 && j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' '); }
else
{
if (j == n)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' '); }}}}}
