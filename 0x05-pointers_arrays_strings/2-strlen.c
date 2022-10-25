#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strlen - a function that returns the length of a string
 *@s: string lenth declared
 * Return: Always 0
 */

int _strlen(char *s)
{

	int x = 0;

	for (*s != '\0'; x++)
	{
		x++;
	}

		return (x);
}
