#include "sort.h"

/**
 * swap - swaps two integers array.
 * @x: integer one
 * @y: integer two.
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}


/**
 * selection_sort - Sorts array of integers in ascending order
 * @array: Array of integers.
 * @size: size of array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size) {
    if (array == NULL || size <= 1)
        return;

    for (size_t i = 0; i < size - 1; ++i) {
        size_t min_index = i;

        for (size_t j = i + 1; j < size; ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(&array[i], &array[min_index]);
            print_array(array, size); // Print the array after each swap
        }
    }
}
