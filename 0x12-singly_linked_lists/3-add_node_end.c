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
	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}

/**
 * add_node_end - dds a new node at the beginning of a list_t list
 * @head: var
 * @str: var
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new || !head)
		return (NULL);


	if (!str)
		new->str = NULL;
	else
		new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
	(*head) = new;
	return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
