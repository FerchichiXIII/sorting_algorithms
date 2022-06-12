#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * Return: Nothing
 */
bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swp;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swp;
			}
		}
		print_array(array, size);
	}
}
