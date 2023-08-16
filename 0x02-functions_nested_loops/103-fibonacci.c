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
int i;
 int sum = 0;
int arr[50];
arr[0] = 1;
arr[1] = 2;
for (i = 2; i < 32; i++)
{
arr[i] = arr[i - 1] + arr[i - 2];
}
for (i = 0; i < 32; i++)
{
if (arr[i] % 2 == 0)
{
sum += arr[i];
}
}
printf("%d", sum);
putchar('\n');
}
/**
 * main - entry oint
 * Return: Always 0 (Success)
 */
int main(void)
{
print_Fibonacci_numbers();
return (0);
}
