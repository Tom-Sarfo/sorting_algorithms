#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list in ascending order with Insertion sort algorithm.
 * @list: double pointer to head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		prev = curr->prev;

		while (prev != NULL && prev->n > curr->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = curr;
			else
				*list = curr;

			if (curr->next != NULL)
				curr->next->prev = prev;

			prev->next = curr->next;
			curr->prev = prev->prev;

			curr->next = prev;
			prev->prev = curr;

			print_list(*list);
			prev = curr->prev;
		}

		curr = curr->next;
	}
}
