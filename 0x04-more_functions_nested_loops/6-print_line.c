#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: is the new line
 * Return: Always 0
 */

void print_line(int n)
{

	int x;

	x = 0;
	if (n > 0)

	while (x < n)
	{
		++x;
		_putchar('_');
	}

	_putchar('\n');
}
