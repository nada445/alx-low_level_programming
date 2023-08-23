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
 * strcmp -  compairs two strings.
 * @dest: 1st str
 * @src: 2nd str
 * Return: number indicates the relation between them
 */
int _strcmp(char *s1, char *s2)
{
int sz1;
int sz2;

sz1 = _strlen(s1);
sz2 = _strlen(s2);

if (sz1 > sz2)
return (15);
if (sz1 < sz2)
return (-15);

return (0);

}
