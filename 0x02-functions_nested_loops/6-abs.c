#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @x: x
 * Return: int
 */

int _abs(int x)
{
	int y;

	if (x < 0)
		y = (x * -1);

	else
		y = x;
	return (x);
}
