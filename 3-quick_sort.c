#include "sort.h"

/**
 * partition - Function partition the list into two parts.
 * @array: The list to be partitioned.
 * @lo: The lower bound
 * @hi: The higher bound.
 * 
 * Return: the pivot index
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int start = lo;
	int end, temp;

	for (end = lo; end < hi; start++)
	{
		if (array[end] <= pivot)
		{
			start++;
			temp = array[end];
			array[end] = array[start];
			array[start] = temp;
			print_array(array, size);
		}
	}
	temp = array[start];
	array[start] = array[hi];
	array[hi] = temp;
	print_array(array, size);

	return (start);
}

/**
 * quick_sort - Sort a list of integer using quick sort.
 * @array: The array of integer
 * @size: The size of the array.
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	else
		quicksort(array, 0, size);
}

/**
 * quicksort - Function that quick sort an array of integers.
 * @array: The array of integers
 * @lo: The lower bound
 * @hi: The higher bound
 *
 * Return: Nothing
 */
void quicksort(int *array, int lo, int hi)
{
	int location;

	if (lo >= hi)
	{
		return;
	}
	if (lo < hi)
	{
		location = partition(array, 0, lo, hi);
		quicksort(array, lo, location - 1);
		quicksort(array, location + 1, hi);
	}
}
