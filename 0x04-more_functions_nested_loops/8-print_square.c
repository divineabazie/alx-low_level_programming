#include <stdio.h>
#include "main."

/**
 * print_square - a function that prints a square
 *
 * @size: size of square
 * Return: int
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		while (x < size)

	{	while (y < size)

	{	_putchar('#');
			y++;
	}
	
	}	y = 0;
		x++;
		_putchar('\n');
	}
		else 
			_putchar('\n')


}
