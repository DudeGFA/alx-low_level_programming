#include "function_pointers.h"
/**
 * int_index - returns index of a matching int
 * @array: parameter
 * @size: size of array
 * @cmp: pointer to a function
 * Return: index of matching int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
