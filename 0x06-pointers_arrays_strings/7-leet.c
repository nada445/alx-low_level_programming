#include "main.h"
/**
 * leet -  chande lowercase to upper
 * @a: arr
 * Return: string after changing
 */

char *leet(char *a)
{
int i;
int j;

char arr[8];
arr[0] = 'O';
arr[1] = 'L';
arr[3] = 'E';
arr[4] = 'A';
arr[7] = 'T';
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 8; j++)
{
if ((a[i] == arr[j] || a[i] == arr[j] + 32) && j != 2 && j != 5 && j != 6)
a[i] = '0' + j;
}

}
return (a);
}
