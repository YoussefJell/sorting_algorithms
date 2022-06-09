#include "sort.h"
/**
 * swap_ints - Swaps 2 integers in an array
 * @a: First integer
 * @b: Second integer
 * Return: None (void)
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
