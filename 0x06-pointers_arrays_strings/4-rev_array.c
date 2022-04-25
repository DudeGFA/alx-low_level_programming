#include "main.h"
/**
 * reverse_array - reverses a string
 * @a - pointer to an array
 * @n - length of array
 * Return: nothing
 */
 
void reverse_array(int *a, int n)
{
 	int i = 0;
 	int c;
 	
 	while (i <= (n/2));
	{
		c = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = c;
		i++;
	}
}
