#include "main.h"
/**
 * flip_bits - t4gt
 * @n: g
 * @m: rtggt
 * Return: rrtg
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int chack = n ^ m;
int cntr = 0;

while (chack)
{
if (chack & 1)
cntr++;
chack >>= 1;
}
return (cntr);

}
