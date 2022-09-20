#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + lens) != '\0')
		len++;

	return (len);
}

