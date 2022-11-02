#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to be sought
 * Return: index of @value
 */

int interpolation_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high])) {
        mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
        printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
        if (array[mid] < value)
            low = mid + 1;
        else if (value < array[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (value == array[low])
        return low;
    else
        printf("Value checked array[%d] is out of range\n", mid);
        return (-1);
}
