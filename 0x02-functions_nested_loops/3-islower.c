#include "main.h"

/**
 * _islower - entery point
 *
 * Return: 0 or 1
 */

int _islower(int c)
/* c - is an integer */
{
	int c = 'a';

	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}