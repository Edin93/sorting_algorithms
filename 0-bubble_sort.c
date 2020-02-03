#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the bubble
 * sort algorithm.
 * @array: array to sort.
 * @size: size of the array to be sorted.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
