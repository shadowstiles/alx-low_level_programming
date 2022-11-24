#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory in list_t
 * @head: list_t list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->next);
		free(head);

		head = tmp;
	}
}
