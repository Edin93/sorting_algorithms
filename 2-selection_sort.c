#include "sort.h"
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order, using selection sort.
 * @array: array of integers.
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int val;

	if (size > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			if (min != i)
			{
				val = array[i];
				array[i] = array[min];
				array[min] = val;
			}
			print_array(array, size);
		}
	}
}
