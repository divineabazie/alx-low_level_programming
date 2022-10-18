#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: c
 *
 * Return: int
 */

int _isalpha(int c)
{
	int x;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		x = 1;
	else
		x = 0;

	return (x);

}
