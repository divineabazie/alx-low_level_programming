#include <stdio.h>
#include "main.h"

/**
 *_isdigit - a function that checks for a digit
 *
 *@c: c
 *Return: int
 */

int _isdigit(int c)
{
	int x;

	for (c = 0; c <= 9; c++)
	{
	if (c != 0 && c != 9)
		x = 0;
	else
		x = 1;
	}
	return (x);

}
