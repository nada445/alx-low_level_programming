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
int arr[50];
arr[0] = 1;
arr[1] = 2;
for (i = 2; i < 46; i++)
{
arr[i] = arr[i - 1] + arr[i - 2];
}
for (i = 0; i < 56; i++)
{
printf("%d", arr[i]);
if (i != 49)
{
putchar(',');
putchar(' ');

}
}
printf("2971215073, ");
printf("4807526976, ");
printf("7778742049, ");
printf("12586269025, ");
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
