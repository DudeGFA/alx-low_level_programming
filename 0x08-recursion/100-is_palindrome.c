#include "main.h"
/**
 * is_palindrome - returns 1 if @s is a palindrome
 * @s: parameter
 * Return: 1 or 0
 */
int palindrome(char *a, int b)
{
	if (*(a + 1) != '\0')
		return (1 + palindrome(a + 1, b));
	return (0);
}
int _palindrome(char *c, int d)
{
	if ((c + d) = c - 1 - d + palindrome(c, d))
		return (1);
	if (*(c + d) = *(c - 1 - d + palindrome(c, d))
		return (_palindrome(c, d + 1));
	else
		return (0);
}	
int is_palindrome(char *s)
{
	return (_palindrome(s, 0);
}
