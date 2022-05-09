#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - creates and returns address to allocated memory
 * @b: parameter
 * Return: adress to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL);
		free(p);
		return(98);
	free(p);
	return (malloc(b));
}
