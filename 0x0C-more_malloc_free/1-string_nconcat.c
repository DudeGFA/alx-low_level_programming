#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strins
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, a, l;
	char *str;

	for(i = 0; s1[i] != '\0'; i++)
	for(j = 0; s2[j] != '\0' && j < n; j++)
	str = malloc(i + j + 1);
	for(k = 0; k < i; k++)
		str[k] = s1[k];
	for(l = k, a = 0; (l - k) < n; a++, l++)
		str[l] = s2[a];
	return (str);
}
