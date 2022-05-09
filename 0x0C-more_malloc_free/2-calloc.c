#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory and initialises it with 0
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int p, i, n;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = nmemb * size;
	arr = malloc(p);
	if (arr = NULL)
	{
		free(arr);
		return (NULL);
	}
	n = 0;
	for(i = 0; i < p; i++)
		arr[i] = n;
	return (arr);
}
