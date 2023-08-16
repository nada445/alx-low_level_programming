#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_Fibonacci_numbers - print_Fibonacci_numbers
 * description: multipiles of 3 and 5
 * Return: Always 0 (Success)
 */

void print_Fibonacci_numbers(void)
{
long double tmp;
long double i2 = 2.0;
long double i1 = 1.0;
int counter = 2;
printf("%d, ", 1);
printf("%d, ", 2);
while (counter < 98)
{
printf("%.0Lf", i2 + i1);
if (counter != 97)
printf(", ");
tmp = i2;
i2 = i2 + i1;
i1 = tmp;
counter++;
}
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
