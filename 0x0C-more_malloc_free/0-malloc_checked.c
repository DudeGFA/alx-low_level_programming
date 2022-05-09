#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - creates and returns address to allocated memory
 * @b: parameter
 * Return: adress to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
