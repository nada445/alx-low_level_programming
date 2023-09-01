/**
 * _strlen - prints out the length of the str
 * @s: str to print its size
 * Return: length of string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
}

return (i);
}

/**
 * _strcmp -  compairs two strings.
 * @s1: 1st str
 * @s2: 2nd str
 * Return: number indicates the relation between them
 */
int _strcmp(char *s1, char *s2)
{
int i;
int sz1;

sz1 = _strlen(s1);

for (i = 0; i < sz1; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}

