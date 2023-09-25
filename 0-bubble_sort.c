#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size/number of the elements in the array.
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int flag;

	if (size < 2)
		return;

	while (i < size - 1)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, (j + 1));
				flag = 1;
				print_array(array, size);
			}
		}
		i++;

		if (flag == 0)
			break;
	}
}


/**
 *swap - swap the the elements at the given indices
 *@arr: pointer to array
 *@idx1: first index
 *@idx2: second index
 */

void swap(int arr[], int idx1, int idx2)
{
	int tmp;

	tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}
