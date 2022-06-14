#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * @list: The list to be sorted
 * Return: Nothing
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *key;

	if (list == NULL || list == NULL || (*list)->next == NULL)
	{
		return;
	}

	i = (*list)->next;
	while (i)
	{
		j = i;
		while (j->prev != NULL && j->n < j->prev->n)
		{
			key = j->prev->prev;
			if (j->prev->prev != NULL)
				j->prev->prev->next = j;
			j->prev->prev = j;
			j->prev->next = j->next;
			if (j->next != NULL)
				j->next->prev = j->prev;
			j->next = j->prev;
			j->prev = key;
			if (j->prev == NULL)
				list = j;
			print_list(list);
		}
		i = i->next;
	}
}
