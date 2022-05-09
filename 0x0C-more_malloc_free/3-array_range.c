#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array containing integers from min to max both included.
 * @min: parameter
 * @max: parameter
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (max < min)
		return (NULL);
	p = malloc((1 + (max - min)) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
