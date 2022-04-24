#include "main.h"

/**
 * _strcat - concatenates a string
 * @dest - parameter
 * @src - parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n = 0, k = 0;
	while (dest[i])
	{
		i++;
	}
	char pen[i];

	while (dest[n])
	{
		pen[n] = dest[n];
		n++;
	}
	while (src[j])
	{
		j++;
	}
 	int s = i + j;

	while (k <= s)
	{
		if(k <= i)
			dest[k] = pen[k];
		else
			dest[k] = src[k];
		k++;
	}
    return (dest);
}
