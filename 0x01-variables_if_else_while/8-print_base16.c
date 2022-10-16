#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;

	x = '0';
	for (x = '0'; x <= '9'; ++x)
		putchar(x);

	y = 'a';
	for (y = 'a'; y <= 'f'; ++y)
		putchar(y);

	putchar('\n');

		return (0);



}
