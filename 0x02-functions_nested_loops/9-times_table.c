#include <stdio.h>
#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int num;
	int count;

	for (num = '0'; num <= 9; num++)
	{
	for (count = '0'; count <= '9'; count++)
	{
		if (num <= count)
			_putchar(num = count * num);

	_putchar(count);

	_putchar('\n');
	}
	}




}
