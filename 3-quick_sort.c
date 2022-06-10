#include "sort.h"
/**
 * partition - Lomuto partition scheme
 *
 * @array: array to sort
 * @low: smallest index
 * @high: highest index
 * Return: next index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap_ints(&array[i], &array[j]);

			i++;
		}
	}
	swap_ints(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}
/**
 * sort - the sorting algorithm
 *
 * @array: array to sort
 * @low: lowest index
 * @high: highest index
 */
void sort(int *array, int low, int high, size_t size)
{

	int pivot_index;

	if (low >= high)
		return;

	pivot_index = partition(array, low, high, size);
	sort(array, low, pivot_index - 1, size);
	sort(array, pivot_index + 1, high, size);
}
/**
 * quick_sort - initial function
 *
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	sort(array, 0, size - 1, size);
}
