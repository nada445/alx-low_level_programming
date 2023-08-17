#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i;
long int max = -1;
long int n = 612852475143;
while (n % 2 == 0)
{
max = 2;
n /= 2;
}
for (i = 3; i < sqrt(n); i += 2)
{
if (n % i == 0)
{
if (max < i)
max = i;
n /= i;
}
}
if (n > 2)
max = n;
printf("%ld\n", max);
return (0);
}
