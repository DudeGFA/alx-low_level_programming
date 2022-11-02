#include "search_algos.h"

int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound = 1;

	if (size == 0 || array == NULL) {
		return (-1);
	}

	while (bound < size && array[bound] < value) {
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	return (binary_search(array + (bound / 2), bound - (bound / 2), value));
}
