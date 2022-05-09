#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a pointer with a new size
 * @old_size: old memory size
 * @new_size: new memory size
 * ptr: pointer
 * Return: reallocated pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *s;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && prt != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	a = ptr;
	s = malloc(new_size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (b = 0; b < old_size && b < new_size; b++)
		s[b] = a[b];
	return (s);
}
