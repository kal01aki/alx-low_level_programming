#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char c;
	int count = 1;

	while (count <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
