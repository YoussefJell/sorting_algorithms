#include "sort.h"
/**
 * selection_sort - selection_sorting algorithm
 *
 * @array: array to sort
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t min_index, i, j;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		swap_ints(&array[min_index], &array[i]);
		print_array(array, size);
	}
}
