#include "main.h"
/**
 * _isalpha.c - a function that checks for alphabetic character
 * @c: is the int that will use for the argument of this function
 * Return (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
