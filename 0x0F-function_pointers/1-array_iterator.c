#include "function_pointers.h"
/**
 * array_iterator - iterates over an array
 * @size: size of array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
