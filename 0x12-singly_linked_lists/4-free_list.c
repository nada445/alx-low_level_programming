#include "lists.h"
/**
 * free_list - dds a new node at the beginning of a list_t list
 * @head: var
 * Return: the address of the new element, or NULL if it failed
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}

}
