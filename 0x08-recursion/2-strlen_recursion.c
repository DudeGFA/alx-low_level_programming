#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: parameter
 * Return - int
 */
int _strlen_recursion(char *s)
{
	int p = 0;
	
	if (*s == '\0')
		return (0);
	else
		p = 1 + _strlen_recursion(s + 1);
	return (p);
}
