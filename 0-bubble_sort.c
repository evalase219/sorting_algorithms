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
	size_t i = 0, j = 0;
	int temp = 0, flag;

	while (i < size - 1)
	{
		flag = 0;
		for (; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
		i++;
		if (flag == 0)
		{
			break;
		}
	}
}
