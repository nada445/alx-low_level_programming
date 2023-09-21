#include "lists.h"
#include <string.h>
/**
 * _strlen - prints out the length of the str
 * @s: str to print its size
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}

/**
 * add_node - dds a new node at the beginning of a list_t list
 * @head: var
 * @str: var
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	if (!head)
		return (NULL);
	return (*head);

}
