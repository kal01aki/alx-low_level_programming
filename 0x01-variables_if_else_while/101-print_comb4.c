#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hunds = '0';

	for (hunds= '0'; hunds <= '9'; hunds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (hunds == tens) || (ones < tens) || (tens < hunds)))
				{
					putchar(hunds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && tens == '8' && hunds == '7'))
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
