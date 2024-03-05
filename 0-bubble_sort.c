#include "sort.h"
/**
 * bubble_sort - sort elements of array with bubble sort algorithm
 * @array: array to sort
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, k;
	int tmp;

	for (idx = 0; idx < size; idx++)
	{
		for (k = 0; k < size - idx - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
