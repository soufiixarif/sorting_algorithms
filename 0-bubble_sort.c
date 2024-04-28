#include "sort.h"

/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	int     swap;
	size_t  i, j;

	if (size < 2)
		return ;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size && array[j + 1])
		{
			if (array[j] > array [j + 1])
			{
				swap = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swap;
				print_array(array,size);
			}
			j++;
		}
		i++;
	}
}
