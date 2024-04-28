#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */

void selection_sort(int *array, size_t size)
{
    size_t i, ptr,checker, j;
    int swap;

    i = 0;
    while (i < size)
    {
        ptr = i;
        checker = 0;
        j = i + 1 ;
        while (j < size)
        {
            if (array[ptr] > array[j])
            {
                ptr = j;
                checker++;
            }
            j++;
        }
        swap = array[i];
        array[i] = array[ptr];
        array[ptr] = swap;
        if (checker != 0)
            print_array(array, size);
        i++;
    }
}
