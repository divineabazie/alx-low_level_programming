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
	int x;

	x = 0;

	while (n < x)
	{
		++x;
		_putchar(92);
	}

	_putchar('\n');



}
