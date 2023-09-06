#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: str
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
char **arr;
int wordindx[100], cntr, spccntr, idx, i, j;
cntr = 0, spccntr = 0, idx = 0;
if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && ((str[i - 1] == ' ' && i != 0) || i == 0))
{
wordindx[cntr++] = i;
}}
arr = (char **)malloc((cntr) *sizeof(char *));
if (arr == NULL || cntr = 1)
{
free(arr);
return (NULL); }
for (i = 0; i < cntr; i++)
{
spccntr = 0;
for (j = wordindx[i]; str[j] != ' '; j++)
spccntr++;
arr[i] = (char *)malloc(spccntr); }
for (i = 0; i < cntr; i++)
{
if (arr[i] == NULL)
{
for (i = 0; i < cntr; i++)
free(arr[i]);
free(arr);
return (NULL); }}
for (i = 0; i < cntr; i++)
{
idx = 0;
for (j = wordindx[i]; str[j] != ' '; j++)
{
arr[i][idx++] = str[j]; }
arr[i][idx + 1] = '\0'; }
arr[cntr] = NULL;
return (arr); }
