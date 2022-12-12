#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tns = '0';
	int hunds = '0';

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tns = '0'; tns <= '9'; tns++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tns) || (hunds == tns) || (ones < tns) || (tns < hunds)))
				{
					putchar(hunds);
					putchar(tns);
					putchar(ones);
					if (!(ones == '9' && tns == '8' && hunds == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
