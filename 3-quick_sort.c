#include "sort.h"
/**
 * partition - lamuto partition scheme
 * @array: integers array
 * @lower: lowest number in array
 * @higher: Highest number in array
 * @size: Size of array
 * Return: index
 */
int partition(int *array, int lower, int higher, int size)
{
	int piv = array[higher];
	int idx = lower;
	int temp, k = 0;

	for (k = lower; k < higher; k++)
	{
		if (piv >= array[k])
		{
			if (idx != k)
			{
				temp = array[idx];
				array[idx] = array[k];
				array[k] = temp;
				print_array(array, size);
			}
			idx++;
		}
	}
	if (idx != k)
	{
		temp = array[idx];
		array[idx] = array[higher];
		array[higher] = temp;
		print_array(array, size);
	}
	return (idx);
}
/**
 * set_pivot- set the pivot using recursion
 * @array: Array of integers
 * @size: Size of array
 * @low: lowest number in array
 * @high: highest number in array
 * Return: Void
 */
void set_pivot(int *array, int low, int high, int size)
{
	int pie = 0;

	if (low < high)
	{
		pie = partition(array, low, high, size);

		set_pivot(array, low, pie - 1, size);
		set_pivot(array, pie + 1, high, size);
	}
}

/**
 * quick_sort - Sorts array of integers in ascending order with Quick sort algorithm
 * @array: Array of integers
 * @size: Size of array
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	set_pivot(array, 0, (int)size - 1, (int)size);
}
