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
	unsigned int i, j, k, a, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == "")
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
	if (s2 == "")
		j = 0;
	else
		for (j = 0; s2[j] != '\0'; j++)
	str = malloc(i + j + 1);
	if (n > j)
		n = j;
	if (str == NULL)
		return (0);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = k, a = 0; a < n; a++, l++)
		str[l] = s2[a];
	str[i + j] = '\0';
	return (str);
}
