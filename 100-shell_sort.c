#include "sort.h"

/**
 * shell_sort - Sort an array using shell sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int temp;

	/*increment gap when it is <= N/3*/
	while (gap <= size/3)
	{
		gap = (gap * 3) + 1;
	}
	/*Terminate the program when gap is less than or equal to 0*/
	while (gap > 0)
	{
		for (j = gap; j < size; j++)
		{
			temp = array[j];
			i = j;
			while (i > gap - 1 && array[i - gap] >= temp)
			{
				array[i] = array[i - gap];
				i = i - gap;
			}
			array[i] = temp;
		}
		gap = (gap - 1)/3;
		print_array(array, size);
	}
}
