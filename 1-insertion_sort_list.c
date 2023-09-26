#include "sort.h"

/**
 *insertion_sort_list - sort a list of integers
 *in a linked list in assceding order
 *
 *@list: pointer to the head pointer of the linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *next, *current;
	listint_t *clone = NULL;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		next = current->next;
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
			print_list(*list);
		}
		else
			*list = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		sort(&clone, current);
		current = next;
	}
	*list = clone;
}

/**
 *sort - create a dummy list to insert the current node at the right index
 *@clone: pointer to original list
 *@current: the current node to insert
 */
void sort(listint_t **clone, listint_t *current)
{
	listint_t *tmp;

	if (*clone == NULL || (*clone)->n >= current->n)
	{
		current->next = *clone;
		current->prev = NULL;
		if (*clone != NULL)
			(*clone)->prev = current;
		*clone = current;
		print_list(*clone);
	}
	else
	{
		tmp = *clone;
		while (tmp->next != NULL && tmp->next->n < current->n)
		{
			tmp = tmp->next;
		}

		current->next = tmp->next;
		current->prev = tmp;
		if (tmp->next != NULL)
			tmp->next->prev = current;
		tmp->next = current;
		print_list(*clone);
	}
}
