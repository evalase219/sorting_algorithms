#include "sort.h"

/**
 * selection_sort - Sort a list of array using selection sort.
 * @array: The list to be sorted.
 * @size: The size of the array.
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min = 0;
	int temp;

	for (; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
