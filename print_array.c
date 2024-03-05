#include "sort.h"
/**
 * print_array - Output array of integers
 *
 * @array: Array to be outputed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t idx;

	idx = 0;
	while (array && idx < size)
	{
		if (idx > 0)
			printf(", ");
		printf("%d", array[idx]);
		++idx;
	}
	printf("\n");
}
