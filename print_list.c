#include "sort.h"

/**
 * print_list - Output list of integers
 *
 * @list: list to be printed
 */
void print_list(const listint_t *list)
{
	int idx;

	idx = 0;
	while (list)
	{
		if (idx > 0)
			printf(", ");
		printf("%d", list->n);
		++idx;
		list = list->next;
	}
	printf("\n");
}
