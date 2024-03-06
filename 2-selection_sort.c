#include "sort.h"

/**
 * selection_sort - sorts unordered array with selection sort algorithm
 * @array: array to sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t idx, k, min;

	for (idx = 0; idx < size - 1; idx++)
	{
		min = idx;

		for (k = idx + 1; k < size; k++)
		{
			if (array[k] < array[min])
			{
				min = k;
			}
		}

		if (min != idx)
		{
			tmp = array[idx];
			array[idx] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
