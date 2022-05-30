#include "main.h"
/**
 * binary_to_uint - converts binary to int
 *
 * @b: parameter
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i, j, k, pow;
	unsigned int *ptr;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	ptr = malloc(i * sizeof(int));
	if (ptr == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		if (b[k] < 48 || b[k] > 49)
			return (0);
		ptr[k] = b[k] - '0';
	}
	for (j = 0; j < i; j++)
	{
		if (j == (i - 1))
			bin += ptr[j];
		else
		{
			pow = 1;
			for (k = (i - j); k > 1; k--)
				pow = pow * 2;
			bin += ptr[j] * pow;
		}
	}
	return (bin);
}
