#include "sort.h"

/**
 * swap - Swap two integers.
 * @x: The first integer.
 * @y: The second integer.
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *low;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		low = array + a;
		for (b = a + 1; b < size; b++)
			low = (array[b] < *low) ? (array + b) : low;

		if ((array + a) != low)
		{
			swap(array + a, low);
			print_array(array, size);
		}
	}
}
