#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by new line
 * @n: a number to start count from
 * description: count to 98
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 99; i++)
{
if (i < 0)
_putchar('-');
if (abs(i) >= 10 && abs(i) < 100)
{
_putchar('0' + abs(i) / 10);
_putchar('0' + abs(i) % 10); }
else if (abs(i) >= 100)
{
_putchar('0' + abs(i) / 100);
_putchar('0' + (abs(i) % 100) / 10);
_putchar('0' + (abs(i) % 100) % 10); }
else
_putchar('0' + abs(i));
if (i != 98)
{
_putchar(',');
_putchar(' '); }}}
else
{
for (i = n; i >= 0; i--)
{
if (i >= 100)
{
_putchar('0' + i / 100);
_putchar('0' + (i % 100) / 10);
_putchar('0' + (i % 100) % 10); }
else
{
_putchar('0' + i / 10);
_putchar('0' + i % 10); }
if (i != 98)
{
_putchar(',');
_putchar(' '); }}}
_putchar('\n'); }
