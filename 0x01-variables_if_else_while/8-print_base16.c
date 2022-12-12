#include <stdio.h>
#include <stdlib.h>

/**
 * main - numbers of base 16 inlowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int ch = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
