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
	int x = 0;
	int y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
	while (x++ < n)
		_putchar(' ');
		_putchar(92);
	_putchar('\n');
	x = 0;
	}


}
