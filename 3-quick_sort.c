#include "sort.h"
/**
 *partition - Partition an array and using pivot
 * @array: an Array
 * @low: int
 * @high: int
 * @size: size of array
 * Return: i
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j, aux;

	for (j = low; j < high; j++)

	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * qsorting - Sorting Recursively an Array
 * @array: Array
 * @low: intger(minimum)
 * @high:integer(maximum)
 * @size: Size of The Array
 * Return: void
 */
void qsorting(int *array, int low, int high, size_t size)
{

	int index;

	if (low < high)

	{
		index = partition(array, low, high, size);
		qsorting(array, low, index - 1, size);
		qsorting(array, index + 1, high, size);
	}
}

/**
 * quick_sort - quick sort Algorithme using partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: (void)
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qsorting(array, 0, size - 1, size);
}
