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
	void *arr;
	unsigned int p, i;

	p = nmemb * size;
	arr = malloc(p);
	for(i = 0; i < p; i++)
		arr[i] = 0;
	return (p);
}
