#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: size of square
 * Return: int
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
	for (y = 1; y <= size; y++)
	{
	_putchar('#');
	}
	}
	}
	_putchar('\n');
	else
		_putchar('\n');
}
