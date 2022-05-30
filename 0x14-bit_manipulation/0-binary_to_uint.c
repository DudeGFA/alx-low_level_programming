#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i, j, k, pow = 1;

	for (i = 0; b[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		if (j == (i - 1))
		{
			bin += b[j];
		}
		else
		{
			for(k = (i - j); k > 1; k-- )	
				pow *= 2;
			bin += b[i] * pow;
		}
	}
	return (bin);
}
