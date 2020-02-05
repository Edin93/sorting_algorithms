#include "sort.h"
void sort(int *array, int size, int s, int e);
void swap(int *h, int *k);
int arrange(int *array, int size, int s, int e);

/**
 * swap - swap h with k.
 * @h: first element to swap.
 * @k: second element to swap.
 * Return: nothing.
 */
void swap(int *h, int *k)
{
	int tmp;

	tmp = *h;
	*h = *k;
	*k = tmp;
}

/**
 * sort - recursive quick sort function.
 * @array: array of int to sort in increasing order.
 * @size: array size.
 * @s: start index.
 * @e: end index.
 * Return: nothing.
 */
void sort(int *array, int size, int s, int e)
{
	int p;

	if (s < e)
	{
		p = arrange(array, size, s, e);
		sort(array, size, s, p - 1);
		sort(array, size,  p + 1, size - 1);
	}
}

/**
 * arrange - recursive quick sort function.
 * @array: array of int to sort in increasing order.
 * @size: array size.
 * @s: start index.
 * @e: end index.
 * Return: nothing.
 */
int arrange(int *array, int size, int s, int e)
{
	int h, k, p;

	p = e;
	h = s;
	for (k = s; k < e; k++)
	{
		if (array[k] < array[p])
		{
			if (array[k] != array[h])
			{
				swap(&array[h], &array[k]);
				print_array(array, size);
			}
			h++;
		}
	}
	if (array[h] != array[k])
	{
		swap(&array[p], &array[h]);
		print_array(array, size);
	}
	return (h);
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: array of integers.
 * @size: the size of the array.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (size > 0)
		sort(array, size, 0, size - 1);
}
