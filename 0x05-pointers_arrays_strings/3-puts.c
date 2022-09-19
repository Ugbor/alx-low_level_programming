#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: A function that prints a strin
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
