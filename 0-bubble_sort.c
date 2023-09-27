#include "sort.h"

/**
 * swap - Swaps two integers array.
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
 * bubble_sort - Sorts array of integers in ascending order.
 * @array: Array of integers.
 * @size: Size of array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size) {
    int swapped_arr;

    if (array == NULL || size == 0)
        return;

    do {
        swapped_arr = 0;
        for (size_t i = 1; i < size; ++i) {
            if (array[i - 1] > array[i]) {
                swap(&array[i - 1], &array[i]);
                swapped_arr = 1;
                print_array(array, size); // Print the array after each swap
            }
        }
    } while (swapped_arr);
}
