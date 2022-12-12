#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}

	putchar('\n');
	return (0);
}	
