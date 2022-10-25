#include <stdio.h>
#include "main.h"

/**
 *_puts - a function that prints a string, followed by a new line
 *
 * @str - string
 * Return: Always 0
 */

void _puts(char *str)
{


	int x = 0;

	while (; *str != '\0'; str++)
	{
		_putchar(x);
		x++;
	}
		return (x);
}
