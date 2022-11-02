#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to be sought
 * Return: index of @value
 */

int jump_search(int *array, size_t size, int value)
{
    unsigned int index = 0, prev, step = sqrt(size);

	if( array == NULL || size == 0)
		return -1;

    while (index < size && array[index] < value)
    {
		printf("Value checked array[%u] = [%u]\n", index, array[index]);
        index += step;
    }
    prev = index - step;
    while(index >= prev)
    {
		if (index == prev + step)
		{
			printf("Value found between indexes [%u] and [%u]\n", prev, index);
			printf("Value checked array[%u] = [%d]\n", prev, array[prev]);
			prev = prev + 1;
		}
		if (prev < size)
		{
			printf("Value checked array[%u] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
			{
				return prev;
			}
		}
		prev++;
    }
	return -1;
}
