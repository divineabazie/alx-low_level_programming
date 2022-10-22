#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: n
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x = 0, y;

	if (n <= 0)
		_putchar('\n');

	for (y = 0; y < n; y++)
	{
		while (x++ < y)
		_putchar(' ');
		_putchar(92);
	_putchar('\n');
	x = 0;
	}


}
