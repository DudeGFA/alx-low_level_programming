#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int i;
	char a = a;
	char z = z;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) >= a) && (*(s + i) <= z))
		{
			*(s + i) -= 32;
		}
	}
	return (s);
}
