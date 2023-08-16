#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_Fibonacci_numbers - print_Fibonacci_numbers
 * description: print_Fibonacci_numbers
 * Return: Always 0 (Success)
 */

void print_Fibonacci_numbers(void)
{
long long arr[50];
arr[0] = 1;
arr[1] = 1;
int i;
for (i = 2; i < 50; i++)
{
arr[i] = arr[i - 1] + arr[i - 2];
}
for (i = 0; i < 50; i++)
{
printf("%lld", arr[i]);
if (i != 49)
{
putchar(',');
putchar(' ');

}
}
putchar('\n');
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
print_Fibonacci_numbers();
return (0);
}
