#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char c = 'a';
	int count = 1;

	while (count <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			c++;
		}
		count++;
		_putchar('\n');
	}
}
