#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * @size: size of the triangle
 * Return: int
 */

void print_triangle(int size)
{
	int x;
	int y;

	for (x = 0; x <= size; x++)
	{
	for (y = 0; y <= size; y++)
	{
		_putchar('#');
		_putchar('\n');
	}
	}

	_putchar('\n');






}
