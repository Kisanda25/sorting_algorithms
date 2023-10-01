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
 * shell_sort - Sort an array
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t x, i, j;

	if (array == NULL || size < 2)
		return;

	for (x = 1; x < (size / 3);)
		x = x * 3 + 1;

	for (; x >= 1; x /= 3)
	{
		for (i = x; i < size; i++)
		{
			j = i;
			while (j >= x && array[j - x] > array[j])
			{
				swap(array + j, array + (j - x));
				j -= x;
			}
		}
		print_array(array, size);
	}
}
