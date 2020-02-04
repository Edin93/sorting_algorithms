#include "sort.h"
/**
* quick_sort - function that sorts an array of integers
* in ascending order using the Quick sort algorithm.
* @array: array of integers.
* @size: the size of the array.
*/
void quick_sort(int *array, size_t size)
{
int i, j, tmp;
int pivot = array[i];
for (i = 0; i < (size - 1); i++)
{
for (j = i; j < size; j++)
{
if (array[j] < pivot)
{
}
}
}
